#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
using namespace std;

struct IMDB
{
    int rank;
    string name;
    int year;
    double rating;
    string genre;
    string certificate;
    string run_time;
    long budget;
    long box_office;
    string casts;
    string directors;
    string writers;
};

vector<IMDB> docFile(string path)
{
    vector<IMDB> imdb;
    ifstream inFile;
    inFile.open(path);
    string line;
    getline(inFile, line);
    while (getline(inFile, line))
    {
        IMDB im;
        istringstream iss(line);
        string token;

        getline(iss, token, ',');
        im.rank = stoi(token);

        getline(iss, token, ',');
        im.name = token;

        getline(iss, token, ',');
        im.year = stoi(token);

        getline(iss, token, ',');
        im.rating = stod(token);

        getline(iss, token, ',');
        im.genre = token;

        getline(iss, token, ',');
        im.certificate = token;

        getline(iss, token, ',');
        im.run_time = token;

        getline(iss, token, ',');
        im.budget = stoi(token);

        getline(iss, token, ',');
        im.box_office = stoi(token);

        getline(iss, token, ',');
        im.casts = token;

        getline(iss, token, ',');
        im.directors = token;

        getline(iss, token, ',');
        im.writers = token;

        imdb.push_back(im);
    }
    inFile.close();
    return imdb;
}

void print_directorName(vector<IMDB> &imdb, string &directorName)
{
    long total_movie = 0;
    for (auto &im : imdb)
    {
        if (im.directors == directorName)
        {
            cout << im.rank << ", " << im.name << ", " << im.directors << endl;
            total_movie += im.box_office;
        }
    }
}

// Hàm chuyển đổi thành phút
int toMinute(string run_time)
{
    int hour_pos = run_time.find("h");
    int min_pos = run_time.find("m");
    int hour = 0;
    int minute = 0;
    if (hour_pos != string::npos)
    {
        hour = stoi(run_time.substr(0, hour_pos));
    }
    if (min_pos != string::npos)
    {
        minute = stoi(run_time.substr(hour_pos + 2, min_pos - hour_pos - 2));
    }
    return hour + minute / 60;
}

int dem(vector<IMDB> &imdb, string run_time)
{
    int dem = 0;
    int target_minutes = toMinute(run_time);
    for (auto &im : imdb)
    {
        if (toMinute(im.run_time) >= target_minutes)
        {
            cout << im.rank << ", " << im.run_time << endl;
            dem++;
        }
    }
    return dem;
}

void outFile(vector<IMDB> imdb, string &actName)
{
    for (auto &im : imdb)
    {
        if (im.casts.find(actName) != string::npos)
        {
            cout << im.rank << ", " << im.name << ", " << im.casts << endl
                 << endl
                 << endl;
        }
    }
}

int main(int argc, char *argv[])
{
    if (argc < 9)
    {
        cout << "Invalid input";
        exit(0);
    }
    string path, directorName, actName, run_time;
    int run_time1 = toMinute(run_time);
    for (int i = 1; i < argc; i++)
    {
        if (string(argv[i]) == string("-i"))
        {
            path = argv[i + 1];
        }
        if (string(argv[i]) == string("-p"))
        {
            directorName = argv[i + 1];
            int j = i + 1;
            while (string(argv[j + 1]) != string("-i") && string(argv[j + 1]) != string("-w") && string(argv[j + 1]) != string("-h"))
            {
                directorName += " ";
                directorName += string(argv[j + 1]);
                j++;
            }
        }
        if (string(argv[i]) == string("-w"))
        {
            actName = argv[i + 1];
            int j = i + 1;
            while (string(argv[j + 1]) != string("-i") && string(argv[j + 1]) != string("-p") && string(argv[j + 1]) != string("-h"))
            {
                actName += " ";
                actName += string(argv[j + 1]);
                j++;
            }
        }
        if (string(argv[i]) == string("-h"))
        {
            run_time1 = stoi(argv[i + 1]);
        }
    }
    vector<IMDB> imdb = docFile(path);
    // cout << directorName << endl;
    // print_directorName(imdb, directorName);
    // cout << dem(imdb, "2h 22m");
    outFile(imdb, actName);
}