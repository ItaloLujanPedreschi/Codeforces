#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;
  int lowers = 0;
  for (int i = 0; i < s.length(); i++) {
    if (int(s[i]) >= 97) {
      lowers++;
    }
  }
  for (int i = 0; i < s.length(); i++) {
    if (lowers > (s.length() - 1) / 2) {
      s[i] = tolower(s[i]);
    } else {
      s[i] = toupper(s[i]);
    }
  }
  std::cout << s << std::endl;
  return 0;
}
