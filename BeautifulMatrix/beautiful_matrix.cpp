#include <iostream>

int main() {
  int row, col;
  for (int i = 0; i < 5; i++) {
    int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    if (a == 1) {
      col = 0;
    } else if (b == 1) {
      col = 1;
    } else if (c == 1) {
      col = 2;
    } else if (d == 1) {
      col = 3;
    } else if (e == 1) {
      col = 4;
    } else {
      continue;
    }
    row = i;
    break;
  }
  int row_diff = abs(2 - row);
  int col_diff = abs(2 - col);
  std::cout << row_diff + col_diff;
  return 0;
}