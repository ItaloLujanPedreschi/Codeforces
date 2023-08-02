#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int arr[n];
  int curr_holding = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  int i = 0;
  while (curr_holding < m && arr[i] < 0) {
    ans -= arr[i];
    curr_holding++;
    i++;
  }
  cout << ans << endl;
  return 0;
}