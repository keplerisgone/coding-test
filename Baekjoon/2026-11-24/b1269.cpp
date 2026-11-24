#include <set>
#include <iostream>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, M;
  cin >> N >> M;

  set<int> A;
  set<int> B;

  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A.insert(a);
  }

  for (int i = 0; i < M; i++) {
    int b;
    cin >> b;
    B.insert(b);
  }

  int cnt = 0;

  for (auto it = A.begin(); it != A.end(); it++) {
    if (B.find(*it) == B.end()) {
      cnt++;
    }
  }

  for (auto it = B.begin(); it != B.end(); it++) {
    if (A.find(*it) == A.end()) {
      cnt++;
    }
  }

  cout << cnt << "\n";
}