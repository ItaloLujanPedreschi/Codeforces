#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  string out;
  set<char> vowels = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U', 'y', 'Y'};
  for (int i = 0; i < s.length(); i++) {
    char c = s[i];
    if (vowels.find(c) != vowels.end()) {
      continue;
    }
    out += '.';
    if (int(c) < 97) {
      out += char(int(c) + 32);
    } else {
      out += c;
    }
  }
  cout << out << endl;
  return 0;
}