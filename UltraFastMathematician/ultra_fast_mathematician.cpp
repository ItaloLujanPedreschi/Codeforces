#include <iostream>
#include <string>

int main() {
  std::string x, y;
  std::cin >> x >> y;
  std::string new_num;
  for (int i = 0; i < x.length(); i++) {
    if (x[i] != y[i]) {
      new_num += '1';
    } else {
      new_num += '0';
    }
  }
  std::cout << new_num << std::endl;
  return 0;
}