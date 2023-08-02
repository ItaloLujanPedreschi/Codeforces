#include <iostream>

int main() {
  int n, t;
  std::cin >> n >> t;
  char queue[n];
  std::cin >> queue;
  for (int i = 0; i < t; i++) {
    for (int j = n - 1; j > 0; j--) {
      if (queue[j] == 'G' && queue[j - 1] == 'B') {
        queue[j] = 'B';
        queue[j - 1] = 'G';
        j--;
      }
    }
  }
  std::cout << queue << std::endl;
  return 0;
}