// #include <fstream>
#include <iostream>

#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v = {1,2,3,3,2,1,6,7};
    vector<int> memmory;
    vector<int> count;
    for(int i = 0; i < v.size(); i++){
        bool check = false;
        for(int j = 0; j < memmory.size(); j++){
            if(v[i] == memmory[j]){
                check = true;
                break;
            }
        }
        if(check != true)
                memmory.push_back(v[i]);
            
        }
        for(auto &x : memmory){
            cout << x << " ";
        }
        
    return 0;
}
