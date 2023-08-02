#include <iostream>

using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int possible_spots = n - a;
  if (possible_spots > b + 1) {
    cout << b + 1 << endl;
  } else {
    cout << n - a << endl;
  }
  return 0;
}
