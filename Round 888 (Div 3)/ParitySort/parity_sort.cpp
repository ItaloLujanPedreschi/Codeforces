#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int arr[n];
    for (int j = 0; j < n; j++) {
      cin >> arr[j];
    }
    for (int j = 0; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        if (arr[j] % 2 != 0 && arr[k] % 2 != 0 && arr[j] > arr[k]) {
          int temp = arr[j];
          arr[j] = arr[k];
          arr[k] = temp;
        }
      }
    }
    for (int j = 0; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        if (arr[j] % 2 == 0 && arr[k] % 2 == 0 && arr[j] > arr[k]) {
          int temp = arr[j];
          arr[j] = arr[k];
          arr[k] = temp;
        }
      }
    }
    bool sorted = true;
    for (int j = 0; j < n - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        sorted = false;
        break;
      }
    }
    if (sorted) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}