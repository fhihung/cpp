// #include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <set>
#include <map>
// #iclude <math>


using namespace std;
int main(){
    string s = "a a a a a aa  b  bb bb b b bb a  aa a vc c cc  cc  ccc c";
    map<string, float> wordCount;
    istringstream iss(s);
    string token;
while (iss >> token)
{
    // if(wordCount.count(token) == 0){
        // wordCount[token] = 1;
    //     wordCount.insert(make_pair(token,1));
    // // }
    // else {
        wordCount[token] += 1;
    }
    for(auto p : wordCount){
        cout << p.first << " " << p.second << endl;
    }
       return 0;
    }
 
//     set<string> tmp;
//     string token;
//     istringstream is(s);
//     while (is >> token){
//             tmp.insert(token);
//     }
// for (auto x : tmp){
//     cout << x << endl;
// }