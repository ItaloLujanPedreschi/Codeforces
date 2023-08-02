#include <iostream>

bool is_prime(int n) {
  for (int i = 2; i < (n / 2) + 1; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int get_next_prime(int start_num) {
  start_num++;
  while (!is_prime(start_num)) {
    start_num++;
  }
  return start_num;
}

int main() {
  int n, m;
  std::cin >> n >> m;
  int next_prime = get_next_prime(n);
  if (next_prime == m) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
  return 0;
}