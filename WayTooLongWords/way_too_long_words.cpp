#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::string s;
    std::cin >> s;
    if (s.length() > 10) {
      std::cout << s[0] + std::to_string(s.length() - 2) + s[s.length() - 1] << std::endl;
    } else {
      std::cout << s << std::endl;
    }
  }
  return 0;
}