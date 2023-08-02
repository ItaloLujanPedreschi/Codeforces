#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;
  std::string output = "";
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '.') {
      output += '0';
      continue;
    }
    if (s[i + 1] == '.') {
      output += '1';
    } else {
      output += '2';
    }
    i++;
  }
  std::cout << output << std::endl;
  return 0;
}