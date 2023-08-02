#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int min_pos, max_pos;
  int max = 0;
  int min = 100;
  for (int i = 0; i < n; i++) {
    int num;
    std::cin >> num;
    if (num > max) {
      max = num;
      max_pos = i;
    }
    if (num <= min) {
      min = num;
      min_pos = i;
    }
  }
  int moves = 0;
  if (max_pos > min_pos) {
    moves--;
  }
  moves += max_pos;
  moves += (n - 1 - min_pos);
  std::cout << moves << std::endl;
  return 0;
}