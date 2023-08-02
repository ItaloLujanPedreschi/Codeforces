#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  int idx = 0;
  while (idx < s.length() && s[idx] != 'h') {
    idx++;
  }
  if (idx == s.length() || s[idx] != 'h') {
    cout << "NO" << endl;
    return 0;
  }
  idx++;
  while (idx < s.length() && s[idx] != 'e') {
    idx++;
  }
  if (idx == s.length() || s[idx] != 'e') {
    cout << "NO" << endl;
    return 0;
  }
  idx++;
  while (idx < s.length() && s[idx] != 'l') {
    idx++;
  }
  if (idx == s.length() || s[idx] != 'l') {
    cout << "NO" << endl;
    return 0;
  }
  idx++;
  while (idx < s.length() && s[idx] != 'l') {
    idx++;
  }
  if (idx == s.length() || s[idx] != 'l') {
    cout << "NO" << endl;
    return 0;
  }
  idx++;
  while (idx < s.length() && s[idx] != 'o') {
    idx++;
  }
  if (idx == s.length() || s[idx] != 'o') {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
  return 0;
}