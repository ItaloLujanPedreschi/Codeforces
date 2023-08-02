#include <iostream>

int main() {
  int n;
  std::cin >> n;
  if (n % 2 != 0) {
    std::cout << -1 << std::endl;
    return 0;
  }
  for (int i = 2; i < n; i += 2) {
    std::cout << i << " " << i - 1 << " ";
  }
  std::cout << n << " " << n - 1 << std::endl;
  return 0;
}