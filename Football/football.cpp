#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  int score_1 = 0, score_2 = 0;
  map<string, int> scores;
  for (int i = 0; i < n; i++) {
    string team;
    cin >> team;
    if (scores.find(team) == scores.end()) {
      scores.insert(pair<string, int>(team, 1));
    } else {
      scores[team]++;
    }
  }
  int max_points = 0;
  string winning_team = "";
  for (auto it = scores.begin(); it != scores.end(); it++) {
    if (it->second > max_points) {
      max_points = it->second;
      winning_team = it->first;
    }
  }
  cout << winning_team << endl;
  return 0;
}