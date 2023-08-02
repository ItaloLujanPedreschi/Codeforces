#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int k;
  cin >> k;
  if (k == 0) {
    cout << 0 << endl;
    return 0;
  }
  int arr[12];
  for (int i = 0; i < 12; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + 12);
  int cm = 0;
  for (int i = 11; i >= 0; i--) {
    cm += arr[i];
    if (cm >= k) {
      cout << 12 - i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}