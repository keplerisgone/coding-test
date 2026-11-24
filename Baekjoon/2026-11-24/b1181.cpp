#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
int main(void) {
  int N;
  cin >> N;
  vector<string> v;

  for (int i=0; i<N; i++) {
    string s;
    cin >> s;
    v.push_back(s);
  }

  sort(v.begin(), v.end(), [](string a, string b) {
    if (a.length() == b.length()) {
      return a < b;
    }
    return a.length() < b.length();
  });

  for (int i=0; i<N; i++) {
    if (i > 0 && v[i] == v[i-1]) {
      continue;
    }
    cout << v[i] << "\n";
  }
}