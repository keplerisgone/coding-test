#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
  int N;
  cin >> N;

  vector<int> arr(N);
  vector<int> v(N);
  for (int i=0; i<N; i++) {
    cin >> arr[i];
    v[i] = arr[i];
  }
  sort(arr.begin(), arr.end());
  arr.erase(unique(arr.begin(), arr.end()), arr.end());

  for (int i=0; i<N; i++) {
    auto it = lower_bound(arr.begin(), arr.end(), v[i]);
    cout << (it - arr.begin()) << " ";
  }
}
