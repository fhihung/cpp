#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> chan;
    for(int i= 2; i <100; i+=2){
        chan.push_back(i);
    }
    for(int i : chan){
        cout << i<< " ";
    }

    return 0;
}
