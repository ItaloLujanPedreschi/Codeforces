#include <iostream>
#include <string>

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;
  bool are_not_the_same = false;
  for (int i = 0; i < s1.length(); i++) {
    int c1_val = int(s1[i]);
    if (c1_val >= 97) {
      c1_val -= 32;
    }
    int c2_val = int(s2[i]);
    if (c2_val >= 97) {
      c2_val -= 32;
    }
    if (c1_val > c2_val) {
      std::cout << "1" << std::endl;
      are_not_the_same = true;
      break;
    }
    if (c2_val > c1_val) {
      std::cout << "-1" << std::endl;
      are_not_the_same = true;
      break;
    }
  }
  if (!are_not_the_same) {
    std::cout << "0" << std::endl;
  }
  return 0;
}