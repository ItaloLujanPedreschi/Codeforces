// Learn 2d array sorting

#include <iostream>
#include <algorithm>

using namespace std;

bool compFirstEl(const int(&a)[2], const int(&b)[2]) {
  return a[0] < b[0];
}

int main() {
  int s, n;
  cin >> s >> n;
  int arr[n][2];
  for (int i = 0; i < n; i++) {
    cin >> arr[i][0] >> arr[i][1];
  }
  sort(arr, arr + n, compFirstEl);
  for (int i = 0; i < n; i++) {
    if (arr[i][0] > s) {
      cout << "NO" << endl;
      return 0;
    }
    s += arr[i][1];
  }
  cout << "YES" << endl;
  return 0;
}
