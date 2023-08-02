#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int max_cap = 0;
  int cap = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    std::cin >> a >> b;
    cap -= a;
    cap += b;
    if (cap > max_cap) {
      max_cap = cap;
    }
  }
  std::cout << max_cap << std::endl;
  return 0;
}