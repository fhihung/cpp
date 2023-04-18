
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;
struct Node {
int id;
float x;
float y;
};

int main(int argc, char const *argv[])
{


    if(argc < 4){
        cout << "THIEU DU LIEU";

        exit(0);
    }
    string path;
    int nodeId;
    for(int i = 1; i < argc; ++i){
        if(string(argv[i]) == string("-p"))
        path = argv[i+1];
        else if(string(argv[i]) == string("-i"))
        nodeId = stoi(argv[i+1]);
    }
    ifstream inFile;
    inFile.open(path);
    if(!inFile.is_open()){
        cout << "Khong mo DUOC FILE";
        exit(0);
    }
    vector<Node> allNodes;
    string line;
    getline(inFile, line);
    while(getline(inFile, line)){
        Node n;
        istringstream iss(line);
        string token;
        getline(iss,token,',');
        n.id = stoi(token);
        getline(iss, token, ',');
        n.x = stod(token);
        getline(iss,token,',');
        n.y = stod(token);
        allNodes.push_back(n);

    }
    float x = allNodes[nodeId].x;
    float y = allNodes[nodeId].y;
    float khoangcach_min = 999;
    float khoangcach_max = 0;
    int id_min = -1;
    int id_max = -1;
    for (int i = 0 ; i < allNodes.size(); ++i){
        if(allNodes[i].id == nodeId){
            continue;
        }
        float d = sqrt((x - allNodes[i].x)*(x - allNodes[i].x) + (y - allNodes[i].y)*(y - allNodes[i].y));
        if(khoangcach_min > d){
            khoangcach_min = d;
            id_min = allNodes[i].id;
        }
    }
    cout << id_min;
}
