#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int x = 0, y = 0, z = 0;
  for (int i = 0; i < n; i++) {
    int x1, y1, z1;
    std::cin >> x1 >> y1 >> z1;
    x += x1;
    y += y1;
    z += z1;
  }
  if (x == 0 && y == 0 && z == 0) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
  return 0;
}
