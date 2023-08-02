#include <iostream>

int main() {
  int n, k, l, c, d, p, nl, np;
  std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int total_ml = k * l;
  int total_slices_of_lime = c * d;
  int round_of_toasts_ml = n * nl;
  int round_of_toasts_slices_of_lime = n;
  int round_of_toasts_salt = n * np;
  int rounds_with_ml = total_ml / round_of_toasts_ml;
  int rounds_with_slices = total_slices_of_lime / round_of_toasts_slices_of_lime;
  int rounds_with_salt = p / round_of_toasts_salt;
  int max = 1000;
  if (rounds_with_ml < max) {
    max = rounds_with_ml;
  }
  if (rounds_with_slices < max) {
    max = rounds_with_slices;
  }
  if (rounds_with_salt < max) {
    max = rounds_with_salt;
  }
  std::cout << max << std::endl;
  return 0;
}