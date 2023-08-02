#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a + b + c >= 2) {
      ans++;
    }
  }
  std::cout << ans << std::endl;
  return 0;
}