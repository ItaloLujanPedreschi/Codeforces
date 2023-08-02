#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  if (s.length() < 7) {
    cout << "NO" << endl;
    return 0;
  }
  int count = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '1') {
      if (count < 0) {
        count = 0;
      }
      count++;
    } else {
      if (count > 0) {
        count = 0;
      }
      count--;
    }
    if (abs(count) == 7) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}