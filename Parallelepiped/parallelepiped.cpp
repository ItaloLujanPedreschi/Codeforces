#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

vector<tuple<int, int>> get_possible_edge_pairs(int area) {
  vector<tuple<int, int>> v;
  for (int i = 1; i <= area; i++) {
    if (area % i == 0) {
      tuple<int, int> t(i, area / i);
      v.push_back({i, area / i});
    }
  }
  return v;
}

int main() {
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;
  vector<tuple<int, int>> a1_pairs = get_possible_edge_pairs(a1);
  vector<tuple<int, int>> a2_pairs = get_possible_edge_pairs(a2);
  vector<tuple<int, int>> a3_pairs = get_possible_edge_pairs(a3);
  for (int i = 0; i < a1_pairs.size(); i++) {
    tuple<int, int> a1_pair = a1_pairs[i];
    for (int j = 0; j < a2_pairs.size(); j++) {
      tuple<int, int> a2_pair = a2_pairs[j];
      for (int k = 0; k < a3_pairs.size(); k++) {
        tuple<int, int> a3_pair = a3_pairs[k];
        if (get<1>(a1_pair) == get<0>(a2_pair) && get<1>(a2_pair) == get<0>(a3_pair) && get<1>(a3_pair) == get<0>(a1_pair)) {
          cout << get<0>(a1_pair) * 4 + get<1>(a1_pair) * 4 + get<1>(a2_pair) * 4 << endl;
          return 0;
        }
      }
    }
  }
  return 0;
}