#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;
  bool prints_something = false;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
      prints_something = true;
      std::cout << "YES" << std::endl;
      break;
    }
  }
  if (!prints_something) {
    std::cout << "NO" << std::endl;
  }
  return 0;
}