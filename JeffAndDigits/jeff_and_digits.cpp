// Problem with Codeforces
// 999999999 is divisible by 9 but solution says it is not

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int num_zeros = 0;
  int num_fives = 0;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    if (num == 0) {
      num_zeros++;
    } else {
      num_fives++;
    }
  }
  int usable_fives = 0;
  for (int i = 1; i <= num_fives; i++) {
    if ((i * 5) % 9 == 0) {
      usable_fives = i;
      i += 8;
    }
  }
  if (usable_fives == 0 && num_zeros > 0) {
    cout << 0 << endl;
  } else if (usable_fives == 0) {
    cout << -1 << endl;
  } else {
    std::string s;
    for (int i = 0; i < usable_fives; i++) {
      s += '5';
    }
    for (int i = 0; i < num_zeros; i++) {
      s += '0';
    }
    cout << s << endl;
  }
  return 0;
}