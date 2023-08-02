#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int m;
  cin >> m;
  int b[m];
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  int max_ratio = 0;
  map<int, int> ratio_count;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (b[j] % a[i] == 0) {
        int ratio = b[j] / a[i];
        if (ratio_count.find(ratio) == ratio_count.end()) {
          ratio_count.insert(pair<int, int>(ratio, 1));
        } else {
          ratio_count[ratio]++;
        }
        if (ratio > max_ratio) {
          max_ratio = ratio;
        }
      }
    }
  }
  cout << ratio_count[max_ratio] << endl;
  return 0;
}