#include <iostream>
#include <map>
#include <set>
#include <tuple>

using namespace std;

bool is_pt_above(set<int> y_pts, int y) {
  for (int i = y + 1; i <= 1000; i++)  {
    if (y_pts.find(i) != y_pts.end()) {
      return true;
    }
  }
  return false;
}

bool is_pt_below(set<int> y_pts, int y) {
  for (int i = y - 1; i >= -1000; i--)  {
    if (y_pts.find(i) != y_pts.end()) {
      return true;
    }
  }
  return false;
}

bool is_pt_right(set<int> x_pts, int x) {
  for (int i = x + 1; i <= 1000; i++)  {
    if (x_pts.find(i) != x_pts.end()) {
      return true;
    }
  }
  return false;
}

bool is_pt_left(set<int> x_pts, int x) {
  for (int i = x - 1; i >= -1000; i--)  {
    if (x_pts.find(i) != x_pts.end()) {
      return true;
    }
  }
  return false;
}

bool is_pt_surrounded(set<int> y_axis_pts, set<int> x_axis_pts, int x, int y) {
  bool has_up = is_pt_above(y_axis_pts, y);
  bool has_down = is_pt_below(y_axis_pts, y);
  bool has_right = is_pt_right(x_axis_pts, x);
  bool has_left = is_pt_left(x_axis_pts, x);
  return has_up && has_down && has_left && has_right;
}

int main() {
  int n;
  cin >> n;
  tuple<int, int> arr[n];
  map<int, set<int>> pts_on_each_x;
  map<int, set<int>> pts_on_each_y;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    pts_on_each_x[x].insert(y);
    pts_on_each_y[y].insert(x);
    tuple<int, int> pt (x, y);
    arr[i] = pt;
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    tuple<int, int> pt = arr[i];
    int x = get<0>(pt);
    int y = get<1>(pt);
    if (is_pt_surrounded(pts_on_each_x[x], pts_on_each_y[y], x, y)) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}