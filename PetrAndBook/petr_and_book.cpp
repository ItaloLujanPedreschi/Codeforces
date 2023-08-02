#include <iostream>

using namespace std;

int main() {
  int num_pages;
  cin >> num_pages;
  int arr[7];
  for (int i = 0; i < 7; i++) {
    cin >> arr[i];
  }
  int day_idx = 0;
  while (num_pages > 0) {
    num_pages -= arr[day_idx];
    if (num_pages <= 0) {
      break;
    }
    day_idx++;
    day_idx %= 7;
  }
  cout << day_idx + 1 << endl;
  return 0;
}