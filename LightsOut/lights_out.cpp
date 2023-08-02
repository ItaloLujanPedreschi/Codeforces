#include <iostream>

void flip_lights_at_pos(int arr[3][3], int r, int c, int val) {
  arr[r][c] += val;
  if (r > 0) arr[r - 1][c] += val;
  if (r < 2) arr[r + 1][c] += val;
  if (c > 0) arr[r][c - 1] += val;
  if (c < 2) arr[r][c + 1] += val;
}

int main() {
  int arr[3][3] = {
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0}
  };
  for (int i = 0; i < 3; i++) {
    int a, b, c;
    std::cin >> a >> b >> c;
    flip_lights_at_pos(arr, i, 0, a);
    flip_lights_at_pos(arr, i, 1, b);
    flip_lights_at_pos(arr, i, 2, c);
  }
  int output[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (arr[i][j] % 2 == 0) {
        std::cout << 1;
      } else {
        std::cout << 0;
      }
    }
    std::cout << std::endl;
  }
  return 0;
}