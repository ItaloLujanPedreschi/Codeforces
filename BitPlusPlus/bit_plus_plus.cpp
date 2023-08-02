#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;
  int x = 0;
  for (int i = 0; i < n; i++) {
    std::string s;
    std::cin >> s;
    if (s[1] == '-') {
      x--;
    } else {
      x++;
    }
  }
  std::cout << x << std::endl;
  return 0;
}