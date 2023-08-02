#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int l_open = 0, r_open = 0;
  for (int i = 0; i < n; i++) {
    int l, r;
    std::cin >> l >> r;
    if (l == 1) {
      l_open++;
    }
    if (r == 1) {
      r_open++;
    }
  }
  int l_secs;
  if (l_open > n - l_open) {
    l_secs = n - l_open;
  } else {
    l_secs = l_open;
  }
  int r_secs;
  if (r_open > n - r_open) {
    r_secs = n - r_open;
  } else {
    r_secs = r_open;
  }
  std::cout << l_secs + r_secs << std::endl;
  return 0;
}