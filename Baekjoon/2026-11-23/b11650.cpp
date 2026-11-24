#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector<pair<int, int>> arr;
  for (int i=0; i<n; i++) {
    int a, b;
    cin >> a >> b;
    arr.push_back(make_pair(a, b));
  }

  sort(arr.begin(), arr.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first) {
      return a.second < b.second;
    }
    return a.first < b.first;
  });

  for (const auto& p : arr) {
    cout << p.first << " " << p.second << "\n";
  }
}