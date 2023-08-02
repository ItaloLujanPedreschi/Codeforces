#include <iostream>

int main() {
  float n;
  std::cin >> n;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    int val;
    std::cin >> val;
    sum += val;
  }
  std::cout << sum / n << std::endl;
  return 0;
}