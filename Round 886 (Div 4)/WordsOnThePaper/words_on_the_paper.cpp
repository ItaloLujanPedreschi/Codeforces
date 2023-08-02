#include <iostream>
#include <string>

int main() {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    std::string output = "";
    for (int r = 0; r < 8; r++) {
      std::string s;
      std::cin >> s;
      for (int c = 0; c < 8; c++) {
        if (s[c] != '.') {
          output += s[c];
        }
      }
    }
    std::cout << output << std::endl;
  }
  return 0;
}