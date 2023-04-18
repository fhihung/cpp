#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

struct Nomination {
    int year_film;
    int year_ceremony;
    string category;
    string name;
    string film;
    bool winner;
};

vector<Nomination> readcsv(string& path){
    ifstream inFile;
    inFile.open(path);
    if(!inFile.is_open()){
        cout << "Khong mo duoc file";
        exit(0);
}
    vector<Nomination> temp;
    string line;
    getline(inFile,line);
    while(getline(inFile,line)){
    istringstream iss(line);
    Nomination n;
    string token;
    getline(iss,token,',');
    n.year_film = stoi(token);
    getline(iss,token,',');
    n.year_ceremony = stoi(token);
    getline(iss,token,',');
    n.category = token;
    getline(iss,token,',');
    n.name = token;
    getline(iss,token,',');
    n.film = token;
    getline(iss,token,',');
    n.winner = (token == "True");
    temp.push_back(n);
    return temp;
}}
void print_best_actress(vector<Nomination>& nominations) {
    for (int year = 2010; year <= 2023; year++) {
        for (const auto& nom : nominations) {
            if (nom.category == "ACTRESS IN A LEADING ROLE") {
                cout << year << ": " << nom.name << endl;
                break;
            }
        }
    }
}
int main(int argc, char* argv[]) {
    string path;
    string year;
   if (argc < 3){
    cout << "thieu du lieu";
   }
   for(int i = 1; i < argc; ++i){
    if(string(argv[i]) == string("-p")){
        path = argv[i+1];
    }
    if(string(argv[i]) == string("-y")){
        year = argv[i+1];
    }
   }
    vector<Nomination> temp =readcsv(path);
    print_best_actress(temp);
    ofstream outFile;
    outFile.open("/Users/fhihung/Documents/workspaces/learning/cpp/giuaki/output.txt");
    for(int a = 0; a < temp.size() ; a++ ){
        if (temp[a].winner == true){

        }
    }


}
