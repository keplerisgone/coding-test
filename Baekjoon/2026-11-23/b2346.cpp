#include <deque>
#include <iostream>

using namespace std;

int main(void) {
  deque<pair<int, int>> d;
  int n;
  int idx = 0;
  cin >> n;

  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    d.push_back({a, i+1});
  }

  for (int i=0; i<n ; i++) {
    cout << d[idx].second << " ";
    int k = d[idx].first;
    d.erase(d.begin() + idx);
    if (d.empty()) {
      break;
    }
    int size = static_cast<int>(d.size());
    int offset = (k > 0) ? k - 1 : k;
    idx = ((idx + offset) % size + size) % size;
  }

  return 0;
}