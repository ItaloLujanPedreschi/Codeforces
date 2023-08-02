#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  queue<tuple<int, int>> q;
  for (int i = 0; i < n; i++) {
    int target_candies;
    cin >> target_candies;
    tuple<int, int> kid (target_candies, i + 1);
    q.push(kid);
  }
  while (q.size() > 0) {
    tuple<int, int> kid = q.front();
    q.pop();
    int target_candies = get<0>(kid);
    int i = get<1>(kid);
    target_candies -= m;
    if (target_candies > 0) {
      tuple<int, int> new_kid (target_candies, i);
      q.push(new_kid);
      continue;
    }
    if (q.size() == 0) {
      cout << i << endl;
    }
  }
  return 0;
}