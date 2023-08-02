#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int min, max, first;
  std::cin >> first;
  min = first;
  max = first;
  int amazing = 0;
  for (int i = 1; i < n; i++) {
    int curr;
    std::cin >> curr;
    if (curr < min) {
      min = curr;
      amazing++;
    }
    if (curr > max) {
      max = curr;
      amazing++;
    }
  }
  std::cout << amazing << std::endl;
  return 0;
}