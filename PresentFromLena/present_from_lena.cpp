#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int peak_width = n * 4 + 1;
  int line = 1;
  while (line <= n * 2 + 1) {
    string out;
    int dist_from_center_line = abs(n + 1 - line);
    int max_num = abs(n - dist_from_center_line);
    int width = peak_width - dist_from_center_line * 4;
    int side_spaces = (peak_width / 2) - (width / 2);
    for (int i = 0; i < side_spaces; i++) {
      out += ' ';
    }
    out += '0';
    for (int i = 1; i <= max_num; i++) {
      out += ' ';
      out += to_string(i);
    }
    for (int i = max_num - 1; i >= 0; i--) {
      out += ' ';
      out += to_string(i);
    }
    cout << out << endl;
    line++;
  }
  return 0;
}

// 0 -> 1
// 1 -> 5
// 2 -> 9
// Increases by 4