#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
  int N;
  cin >> N;

  string s = to_string(N);
  sort(s.begin(), s.end(), greater<char>());

  cout << s << "\n";
}