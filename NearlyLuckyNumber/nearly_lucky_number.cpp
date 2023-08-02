#include <iostream>

int main() {
  long long n;
  std::cin >> n;
  int lucky_digits = 0;
  while (n > 0) {
    if (n % 10 == 4 || n % 10 == 7) {
      lucky_digits++;
    }
    n /= 10;
  }
  if (lucky_digits == 4 || lucky_digits == 7) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
  return 0;
}