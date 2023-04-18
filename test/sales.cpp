#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<string>
#include<cctype>
using namespace std;
struct Game
{
    int rank;
    string name;
    string platform;
    int year;
    string genre;
    string publisher;
    float NA_Sales;
    float EU_Sales;
    float JP_Sales;
    float Other_Sales;
    float Global_Sales;
};
vector<Game> listGame(string path)
{
    vector<Game> dsGame;
    ifstream infile(path);
    if(!infile.is_open())
    {
        cout << "Khong the mo file !" << endl;
    }
    string line;
    getline(infile,line);
    while(getline(infile,line))
    {
        istringstream iss(line);
        Game game;
        string rankStr;
        string name;
        string platform;
        string yearStr;
        string genre;
        string publisher;
        string NA_SalesStr;
        string EU_SalesStr;
        string JP_SalesStr;
        string Other_SalesStr;
        string Global_SalesStr;
        getline(iss,rankStr,',');
        int rank = stoi(rankStr);
        getline(iss,name,',');
        getline(iss,platform,',');
        getline(iss,yearStr,',');
        int year = stoi(yearStr);
        getline(iss,genre,',');
        getline(iss,publisher,',');
        getline(iss,NA_SalesStr,',');
        float NA_Sales = stof(NA_SalesStr);
        getline(iss,EU_SalesStr,',');
        float EU_Sales = stof(EU_SalesStr);
        getline(iss,JP_SalesStr,',');
        float JP_Sales = stof(JP_SalesStr);
        getline(iss,Other_SalesStr,',');
        float Other_Sales = stof(Other_SalesStr);
        getline(iss,Global_SalesStr,',');
        float Global_Sales = stof(Global_SalesStr);
        game.rank = rank;
        game.name = name;
        game.platform = platform;
        game.year = year;
        game.genre = genre;
        game.publisher = publisher;
        game.NA_Sales = NA_Sales;
        game.EU_Sales = EU_Sales;
        game.JP_Sales = JP_Sales;
        game.Other_Sales = Other_Sales;
        game.Global_Sales = Global_Sales;
        dsGame.push_back(game);
    }
    return dsGame;
}
void Bai4(vector<Game> &game , string &publicsherName)
{
    float tongdoanhthu = 0;
    cout << "Cac tua game duoc phat hanh boi " << publicsherName << " la : " << endl;
    for(int i=0;i<game.size();i++)
    {
        if(game[i].publisher == publicsherName)
        {
            cout << game[i].name << endl;
            tongdoanhthu = tongdoanhthu + game[i].Global_Sales;
        }
    }
    cout << "Tong doanh thu cua tat ca cac tua game nay la : " << tongdoanhthu << endl;
}
void Bai5(vector<Game> &game , string &gameGenre)
{
    int  count = 0;
    for(int i=0;i<game.size();i++)
    {
        if(game[i].genre == gameGenre)
        count ++;
    }
    cout << "Co " << count << " thuoc the loai " << gameGenre << endl;
}
void Bai6(vector<Game> &game)
{
    ofstream outfile("final.txt");
    for(int i=0;i<game.size();i++)
    {
        for(int j=1;j<game.size();j++)
        {
if(game[i].Global_Sales == game[j].Global_Sales)
            {
                int temp = game[i].Global_Sales;
                game[i].Global_Sales = game[j].Global_Sales;
                game[j].Global_Sales = temp;
            }
        }
    }
    outfile << "10 tua game PC co doanh thu cao nhat the gioi la : " << endl;
    for(int i=0;i<game.size();i++)
    {
        if(game[i].platform == "PC")
        {
            outfile << game[i].name << endl;
        }
    }
}
int main(int argc, char *argv[])
{
    if(argc < 7)
    {
        cout << "Error !" << endl;
        exit(0);
    }
    string path;
    string publicsherName;
    string gameGenre;
    for(int i=1;i<argc;i++)
    {
        if(string(argv[i]) == string("-p"))
            path = argv[i+1];
        if(string(argv[i]) == string("-n"))
            publicsherName = argv[i+1];
        if(string(argv[i]) == string("-g"))
            gameGenre = argv[i+1];
    }
    vector<Game> dsgame = listGame(path);
    Bai4(dsgame,publicsherName);
    Bai5(dsgame,gameGenre);
    Bai6(dsgame);
    return 0;
}
