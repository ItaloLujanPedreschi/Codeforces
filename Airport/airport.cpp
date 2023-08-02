#include <iostream>
#include <map>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  map<int, int> seats_per_price_for_low;
  map<int, int> seats_per_price_for_high;
  for (int i = 0; i < m; i++) {
    int init_price;
    cin >> init_price;
    for (int price = init_price; price > 0; price--) {
      // doesnt work because lower prices arent revealed until more expensive tickets are purchased
      // maybe just use a 2d array and sort in reverse order
      // high val will consume all the expensive tickets first
      // low val will consume all the tickets on the cheap planes entirely before moving on
      if (seats_per_price_for_low.find(price) == seats_per_price_for_low.end()) {
        seats_per_price_for_low.insert(pair<int, int>(price, 1));
        seats_per_price_for_high.insert(pair<int, int>(price, 1));
      } else {
        seats_per_price_for_low[price]++;
        seats_per_price_for_high[price]++;
      }
    }
  }
  int x = 0;
  int high_price = 0;
  int found_high = false;
  for (int i = 1000; i >= 1; i--) {
    if (seats_per_price_for_high.find(i) == seats_per_price_for_high.end()) {
      continue;
    }
    if (seats_per_price_for_high[i] > (n - x)) {
      high_price += i * (n - x);
      cout << high_price;
      found_high = true;
      break;
    } else {
      high_price += i * seats_per_price_for_high[i];
      x += seats_per_price_for_high[i];
    }
  }
  if (!found_high) {
    cout << high_price;
  }
  int y = 0;
  int low_price = 0;
  int found_low = false;
  for (int i = 1; i <= 1000; i++) {
    if (seats_per_price_for_low.find(i) == seats_per_price_for_low.end()) {
      continue;
    }
    if (seats_per_price_for_low[i] > (n - y)) {
      low_price += i * (n - y);
      cout << ' ' << low_price << endl;
      found_low = true;
      break;
    } else {
      low_price += i * seats_per_price_for_low[i];
      y += seats_per_price_for_low[i];
    }
  }
  if (!found_low) {
    cout << ' ' << low_price << endl;
  }
  return 0;
}