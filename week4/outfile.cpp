#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


int main(int argc, char const *argv[])
{
    // TAO BIEN inFile
    ifstream inFile;
    inFile.open("/Users/fhihung/Documents/workspaces/cpp/week4/data.txt");
    // TAO BIEN outFile
    ofstream outFile;
    outFile.open("/Users/fhihung/Documents/workspaces/cpp/week4/result.txt");
    //In ra man hinh
    cout << "hello";
    //IN RA FILE result.txt
    // outFile << "hello";
    int x;
    int tong = 0;
    int dem = 0;
    vector<int> vec;
    while (inFile >> x){
        // tong = tong + x;
        // dem++;
        vec.push_back(x);

    }
    for(auto x : vec){
        if(x % 2 == 0){
            outFile << x << endl;
            tong = tong + x;
            dem++;
    }

    }
    if(dem != 0){
        outFile << "TBC = " << float(tong/dem)<< endl;
    }
    return 0;
}
