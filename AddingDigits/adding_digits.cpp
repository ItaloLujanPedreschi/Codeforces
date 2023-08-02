#include <iostream>

int get_num_len(int a) {
  int len = 0;
  while (a > 0) {
    a /= 10;
    len++;
  }
  return len;
}

int main() {
  int a, b, n;
  std::cin >> a >> b >> n;
  int lower = a * 10;
  int upper = a * 10 + 9;
  bool found = false;

  while (lower <= upper) {
    if (lower % b == 0) {
      found = true;
      break;
    }
    lower++;
  }

  if (found) {
    int a_len = get_num_len(a);
    int lower_len = get_num_len(lower);
    int digits_added = lower_len - a_len;
    int digits_remaining = n - digits_added;
    std::string s;
    s += std::to_string(lower);
    for (int i = 0; i < digits_remaining; i++) {
      s += '0';
    }
    std::cout << s << std::endl;
  } else  {
    std::cout << -1 << std::endl;
  }
  return 0;
}