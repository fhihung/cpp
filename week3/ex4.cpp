#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isSNT(int n) {
    if (n <= 1) 
    return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main(int argc, char const *argv[])
{
    int n = 10;
    vector<int> dayso;
    for (int i = 0; dayso.size() < 10 ; i++){
        if(isSNT(i) == true){
        dayso.push_back(i);
        }
    }
    for(auto i : dayso){
        cout << i << ",";
    }
    return 0;
}

