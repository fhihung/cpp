#include <fstream>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <cmath>

using namespace std;

struct Node
{
    int id;
    double x;
    double y;
};
double khoang_cach(Node a, Node b){
    return sqrt((b.x - a.x)*(b.x - a.x)+(b.y-a.y)*(b.y-a.y));
}

int main (int argc, char const *argv[]){
    // unordered_map<int, double, double> abc;

    // if(argc < 2) {
    //     cout << "THIEU DU LIEU";
    // }
    // else if(argc > 2){
    //     cout << "THUA DU LIEU";
    // }
    string path = "/Users/fhihung/Documents/workspaces/cpp/test/coor.csv";
    int nodeId = 3;
    vector<Node> nodes;
    ifstream inFile;
    inFile.open(path);
    if(!inFile.is_open()){
        cout << "KHONG MO DUOC FILE";
        exit(0);
    }
    string line;
    string token;
    string toadox;
    string toadoy;
    
    while(getline(inFile,line)){
        istringstream iss(line);
        getline(iss,token, ',');
        getline(iss,toadox, ',');
        getline(iss,toadoy, ',');

        int id = stoi(token);
        double x = stoi(toadox);
        double y = stoi(toadoy);
        Node importNode = {id, x, y};
        nodes.push_back(importNode);
        cout << id << x << y;
    }
    
}

