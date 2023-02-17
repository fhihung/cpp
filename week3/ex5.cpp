#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> vec = {1,5,7,8,4,12,64};
    vec.insert(vec.begin() + 4, 100); //them phan tu 100 vao vi tri thu 4
    vec.erase(vec.begin()); // xoa phan tu vi tri thu nhat

    for(int i : vec){
        cout << i << ",";
    }
    return 0;
}
