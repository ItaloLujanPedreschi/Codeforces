#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n, m, k, h;
    cin >> n >> m >> k >> h;
    int ans = 0;
    for (int j = 0; j < n; j++) {
      int h2;
      cin >> h2;
      int h_diff = abs(h - h2);
      if (h_diff == 0) {
        continue;
      }
      int num_steps_needed = (h_diff / k) + 1;
      if (h_diff % k == 0 && num_steps_needed <= m) {
        ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}