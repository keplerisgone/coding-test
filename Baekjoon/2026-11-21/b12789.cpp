#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int main(void) {
  vector<int> v;
  stack<int> s;
  
  int n;
  cin >> n;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    v.push_back(a);
  }

  int current = 1;
  while (1) {
    if (v.empty() && s.empty()) {
      cout << "Nice" << endl;
      break;
    }

    if (!v.empty() && v.front() == current) {
      v.erase(v.begin());
      current++;
    } else if (!s.empty() && s.top() == current) {
      s.pop();
      current++;
    } else if (!v.empty()) {
      s.push(v.front());
      v.erase(v.begin());
    } else {
      cout << "Sad" << endl;
      break;
    }
  }
}