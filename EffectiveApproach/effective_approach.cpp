#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> seen_to_idx;
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    seen_to_idx.insert(pair<int, int>(val, i));
  }
  int m;
  cin >> m;
  unsigned long long int a_comparisons = 0, b_comparisons = 0;
  for (int i = 0; i < m; i++) {
    int target;
    cin >> target;
    int idx = seen_to_idx.find(target)->second;
    a_comparisons += idx + 1;
    b_comparisons += n - idx;
  }
  cout << a_comparisons << " " << b_comparisons << endl;
  return 0;
}