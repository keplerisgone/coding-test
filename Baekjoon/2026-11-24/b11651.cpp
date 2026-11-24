#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int N;
  cin >> N;
  vector<pair<int, int>> v;

  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    v.push_back({a, b});
  }

  sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) {
      return a.first < b.first;
    }
    return a.second < b.second;
  });
  
  for (int i = 0; i < N; i++) {
    cout << v[i].first << " " << v[i].second << "\n";
  }
  
  return 0;
}