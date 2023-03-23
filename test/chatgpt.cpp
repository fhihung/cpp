#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <cmath>

using namespace std;
struct Node {
  int id;
  double x;
  double y;
};

int main(int argc, char* argv[]) {
  if (argc < 3) {
    cerr << "Usage: " << argv[0] << " <file_path> <node_id>" << endl;
    return 1;
  }

  string file_path = argv[1];
  int node_id = stoi(argv[2]);

  ifstream infile(file_path);
  string line;
  vector<Node> nodes;
  while (getline(infile, line)) {
    istringstream iss(line);
    string id_str, x_str, y_str;
    if (!(getline(iss, id_str, ',') && getline(iss, x_str, ',') && getline(iss, y_str))) {
      continue;
    }
    int id = stoi(id_str);
    double x = stod(x_str);
    double y = stod(y_str);
    Node node = { id, x, y };
    nodes.push_back(node);
  }
    map<double, int> distances;  // key: distance, value: id
  for (const Node& node : nodes) {
    if (node.id == node_id) {
      continue;
    }
    double distance = sqrt(pow(node.x - nodes[node_id].x, 2) + pow(node.y - nodes[node_id].y, 2));
    distances[distance] = node.id;
  }

  ofstream outfile("output.txt");
  outfile << "Nearest node to " << node_id << " is " << distances.begin()->second << " with distance " << distances.begin()->first << endl;
  outfile << "Farthest node to " << node_id << " is " << distances.rbegin()->second << " with distance " << distances.rbegin()->first << endl;

    outfile.close();
  return 0;
}