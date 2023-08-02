#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  string out;
  bool in_wub = false;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'W' && i + 1 < s.length() && s[i + 1] == 'U' && i + 2 < s.length() && s[i + 2] == 'B') {
      if (!in_wub) {
        out += ' ';
      }
      i += 2;
      in_wub = true;
    } else {
      out += s[i];
      in_wub = false;
    }
  }
  int left = 0, right = out.length() - 1;
  while (out[left] == ' ') {
    left++;
  }
  while (out[right] == ' ') {
    right--;
  }
  string trimmed_out;
  while (left <= right) {
    trimmed_out += out[left];
    left++;
  }
  cout << trimmed_out;
  return 0;
}