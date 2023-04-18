#include <iostream>
#include <string>
#include <map>

using namespace std;

void printTopNWords(string s, int n) {
    // Xử lý các dấu đặc biệt trong chuỗi s
    for (int i = 0; i < s.size(); i++) {
        if (!isalpha(s[i])) { // nếu ký tự không phải là chữ cái
            s[i] = ' '; // thay bằng khoảng trắng
        }
    }

    // Đếm số lần xuất hiện của từng từ trong chuỗi s
    map<string, int> wordCount;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                wordCount[word]++;
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        wordCount[word]++;
    }

    // Tìm và in ra top n từ xuất hiện nhiều nhất
    for (int i = 0; i < n; i++) {
        int maxCount = 0;
        string maxWord = "";
        for (auto it : wordCount) {
            if (it.second > maxCount) {
                maxCount = it.second;
                maxWord = it.first;
            }
        }
        if (!maxWord.empty()) {
            cout << maxWord << ": " << maxCount << endl;
            wordCount.erase(maxWord);
        } else {
            break;
        }
    }
}

int main() {
    string s;
    int n;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Enter n: ";
    cin >> n;
    printTopNWords(s, n);
    return 0;
}
