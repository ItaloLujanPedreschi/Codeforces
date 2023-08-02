#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  int i = 0;
  while (i < s.length()) {
    char curr = s[i];
    if (curr != '1') {
      cout << "NO" << endl;
      return 0;
    }
    if (i + 1 < s.length()) {
      char next = s[i + 1];
      if (next == '4') {
        if (i + 2 < s.length()) {
          char next_next = s[i + 2];
          if (next_next == '4') {
            i++;
          }
        }
        i++;
      }
    }
    i++;
  }
  cout << "YES" << endl;
  return 0;
}