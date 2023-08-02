#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  if (n == 0) {
    cout << "0 0 0" << endl;
    return 0;
  }
  if (n == 1) {
    cout << "0 0 1" << endl;
    return 0;
  }
  if (n == 2) {
    cout << "0 1 1" << endl;
    return 0;
  }
  int prev_a = 0, prev_b = 1;
  int a = 1, b = 2;
  while (b < n) {
    int next = a + b;
    if (next == n) {
      cout << prev_a << " " << prev_b << " " << b << endl;
      return 0;
    }
    prev_a = prev_b;
    prev_b = a;
    a = b;
    b = next;
  }

  return 0;
}