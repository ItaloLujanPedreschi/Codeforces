#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;
  int ones = 0, twos = 0, threes = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '1') {
      ones++;
    } else if (s[i] == '2') {
      twos++;
    } else if (s[i] == '3') {
      threes++;
    }
  }
  std::string output;
  while (ones > 0) {
    output += "1+";
    ones--;
  }
  while (twos > 0) {
    output += "2+";
    twos--;
  }
  while (threes > 0) {
    output += "3+";
    threes--;
  }
  output.pop_back();
  std::cout << output << std::endl;
  return 0;
}