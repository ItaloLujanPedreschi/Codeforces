#include <iostream>

using namespace std;

int main() {
  long long int n, k;
  cin >> n >> k;
  long long int num_odds = (n + 1) / 2;
  if (k <= num_odds) {
    cout << -1 + (2 * k) << endl;
  } else {
    cout << 0 + (2 * (k - num_odds)) << endl;
  }
  return 0;
}