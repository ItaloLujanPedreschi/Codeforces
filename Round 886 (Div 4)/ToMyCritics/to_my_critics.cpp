#include <iostream>

int main() {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a + b >= 10 || a + c >= 10 || b + c >= 10) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }
  return 0;
}