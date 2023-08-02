#include <iostream>

int main() {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    std::cin >> n;
    int highest_score = 0;
    int pos;
    for (int j = 1; j <= n; j++) {
      int a, b;
      std::cin >> a >> b;
      if (a <= 10 && b > highest_score) {
        highest_score = b;
        pos = j;
      }
    }
    std::cout << pos << std::endl;
  }
  return 0;
}