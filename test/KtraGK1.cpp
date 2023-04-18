#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

void xuathien(string s)
{
    string s1;
    for (auto x : s)
    {
        if (isalpha(x))
        {
            s1 += x;
        }
        else
            s1 += ' ';
    }
    map<string, int> ss;
    istringstream iss(s1);
    string token;
    while (iss >> token)
    {
        ss[token]++;
    }
    int max = 0;
    for (auto x : ss)
    {
        if (x.second > max)
        {
            max = x.second;
        }
    }
    for (auto x : ss)
    {
        if (max == x.second)
        {
            cout << x.first << ", " << max << endl;
        }
    }
}

int main(int argc, char *argv[])
{
    string s;
    getline(cin, s);
    xuathien(s);
    return 0;
}

// void docdulieu(string s)
// {
//     string s1;
//     for (auto c : s)
//     {
//         if (isalpha(c))
//         {
//             s1 += c; // s1 += tolower(c) // chuyển chữ hoa thành thường
//         }
//         else
//         {
//             s1 += ' ';
//         }
//     }
//     cout << s1 << endl;
//     map<string, int> str;
//     istringstream iss(s1);
//     string token;
//     while (iss >> token)
//     {
//         str[token]++;
//     }
//     int max = 0;
//     for (auto x : str)
//     {
//         if (x.second > max)
//         {
//             max = x.second;
//         }
//     }
//     for (auto x : str)
//     {
//         if (x.second == max)
//         {
//             cout << x.first << " " << max << endl;
//         }
//     }
// }

// int main(int argc, char *argv[])
// {
//     string s;
//     getline(cin, s);
//     docdulieu(s);
// }
