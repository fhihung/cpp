#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct Game {
    int rank;
    string name;
    string platform;
    int year;
    string genre;
    string publisher;
    double na_sales;
    double eu_sales;
    double jp_sales;
    double other_sales;
    double global_sales;
};
vector<Game> readGameData(const string& filename) {
    vector<Game> games;
    ifstream file(filename);
    if (file) {
        string line;
        getline(file, line); 
        while (getline(file, line)) {
            istringstream ss(line);
            Game game;
            ss >> game.rank >> quoted(game.name) >> quoted(game.platform) >> game.year 
               >> quoted(game.genre) >> quoted(game.publisher) >> game.na_sales >> game.eu_sales 
               >> game.jp_sales >> game.other_sales >> game.global_sales;
            games.push_back(game);
        }
    }
    return games;
}
void printPublisherSales(const vector<Game>& games, const string& publisherName) {
    double totalSales = 0.0;
    for (const auto& game : games) {
        if (game.publisher == publisherName) {
            cout << game.name << " (" << game.platform << "): " << game.global_sales << " million copies sold\n";
            totalSales += game.global_sales;
        }
    }
    cout << "Total sales for " << publisherName << ": " << totalSales << " million copies sold\n";
}
int countGamesByGenre(const std::vector<Game>& games, const std::string& gameGenre) {
    int count = 0;
    for (const auto& game : games) {
        if (game.genre == gameGenre) {
            ++count;
        }
    }
    return count;
}
int main(int argc, char** argv) {
    string path = argv[1];
    string publisher_name = argv[2];
    string game_genre = argv[3];

    vector<Game> read_games(string path);
    vector<Game> games;
    ifstream file(path);
    string line;
    getline(file, line); // 
}