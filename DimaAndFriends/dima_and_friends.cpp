// Problem with Codeforces
// This code works, it returns an answer that the examples say is acceptable but the tests still fail.

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int pos = 0;
  for (int i = 0; i < n; i++) {
    int curr;
    cin >> curr;
    pos += curr;
  }
  int out = 1;
  pos += out;
  if (pos % (n + 1) == 1) {
    out++;
  }
  cout << out << endl;
  return 0;
}