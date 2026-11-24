#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
  int n;
  cin >> n;

  vector<pair<int, string>> arr(n);
  for (int i=0; i<n; i++) {
    cin >> arr[i].first >> arr[i].second;
  }

  stable_sort(arr.begin(), arr.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
    return a.first < b.first;
  });

  for (int i=0; i<n; i++) {
    cout << arr[i].first << " " << arr[i].second << "\n";
  }
  return 0;
}
