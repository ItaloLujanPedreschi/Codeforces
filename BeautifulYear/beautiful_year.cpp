#include <iostream>
#include <set>

bool are_year_digits_distinct(int year) {
  std::set<int> s;
  while (year > 0) {
    int digit = year % 10;
    if (s.find(digit) != s.end()) {
      return false;
    }
    s.insert(digit);
    year /= 10;
  }
  return true;
}

int main() {
  int year;
  std::cin >> year;
  year++;
  while (!are_year_digits_distinct(year)) {
    year++;
  }
  std::cout << year << std::endl;
  return 0;
}
