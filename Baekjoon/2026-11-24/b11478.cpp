#include <string>
#include <set>
#include <iostream>

using namespace std;
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string str;
  cin >> str;

  set<string> s;

  for (int i = 0; i < str.length(); i++) {
    for (int j = 1; j <= str.length() - i; j++) {
      s.insert(str.substr(i, j));
    }
  }

  cout << s.size() << "\n";
}