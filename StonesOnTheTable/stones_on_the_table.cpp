#include <iostream>

int main() {
  int n;
  std::cin >> n;
  char s[n];
  std::cin >> s;
  int remove = 0;
  for (int i = 1; i < n; i++) {
    if (s[i] == s[i - 1]) {
      remove++;
    }
  }
  std::cout << remove << std::endl;
  return 0;
}