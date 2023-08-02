#include <iostream>
#include <map>

int main() {
  std::string s1, s2, s3;
  std::cin >> s1 >> s2 >> s3;
  std::map<char, int> m;
  for (int i = 0; i < s1.length(); i++) {
    std::map<char, int>::iterator it;
    it = m.find(s1[i]);
    if (it != m.end()) {
      m[s1[i]]++;
    } else {
      m.insert(std::pair<char, int>(s1[i], 1));
    }
  }
  for (int i = 0; i < s2.length(); i++) {
    std::map<char, int>::iterator it;
    it = m.find(s2[i]);
    if (it != m.end()) {
      m[s2[i]]++;
    } else {
      m.insert(std::pair<char, int>(s2[i], 1));
    }
  }
  bool same_letters = true;
  for (int i = 0; i < s3.length(); i++) {
    std::map<char, int>::iterator it;
    it = m.find(s3[i]);
    if (it != m.end()) {
      m[s3[i]]--;
      if (m.find(s3[i])->second == 0) {
        m.erase(s3[i]);
      }
    } else {
      same_letters = false;
      break;
    }
  }
  if (m.size() == 0 && same_letters) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
  return 0;
}