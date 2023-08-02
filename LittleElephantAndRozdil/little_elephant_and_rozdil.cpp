#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int min_dist = 1000000001;
  int min_dist_idx = 0;
  bool seen_min_dist = false;
  for (int i = 0; i < n; i++) {
    int dist;
    cin >> dist;
    if (dist == min_dist) {
      seen_min_dist = true;
    }
    if (dist < min_dist) {
      min_dist = dist;
      min_dist_idx = i;
      seen_min_dist = false;
    }
  }
  if (!seen_min_dist) { 
    cout << min_dist_idx + 1 << endl;
  } else {
    cout << "Still Rozdil" << endl;
  }
  return 0;
}