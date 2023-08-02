#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int first;
  cin >> first;
  int prev;
  prev = first;
  int min_diff = 1000;
  int ans = 0;
  for (int i = 1; i < n; i++) {
    int h;
    cin >> h;
    if (abs(h - prev) < min_diff) {
      min_diff = abs(h - prev);
      ans = i + 1;
    }
    prev = h;
    if (i == n - 1 && abs(h - first) < min_diff) {
      min_diff = abs(h - first);
      cout << i + 1 << " " << 1 << endl;
      return 0;
    }
  }
  cout << ans << " " << ans - 1 << endl;
  return 0;
}