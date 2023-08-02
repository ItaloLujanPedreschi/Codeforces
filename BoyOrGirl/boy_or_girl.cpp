#include <iostream>
#include <set>
#include <string>

int main() {
  std::string s;
  std::cin >> s;
  std::set<char> seen;
  for (int i = 0; i < s.length(); i++) {
    seen.insert(s[i]);
  }
  if (seen.size() % 2 == 0) {
    std::cout << "CHAT WITH HER!" << std::endl;
  } else {
    std::cout << "IGNORE HIM!" << std::endl;
  }
  return 0;
}