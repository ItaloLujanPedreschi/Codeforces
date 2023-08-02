#include <iostream>
#include <set>

void add_to_set(std::set<int> *s, int mult, int end) {
  for (int i = mult; i <= end; i += mult) {
    s->insert(i);
  }
}

int main() {
  int k, l, m, n, d;
  std::cin >> k >> l >> m >> n >> d;
  std::set<int> s;
  add_to_set(&s, k, d);
  add_to_set(&s, l, d);
  add_to_set(&s, m, d);
  add_to_set(&s, n, d);
  std::cout << s.size() << std::endl;
  return 0;
}