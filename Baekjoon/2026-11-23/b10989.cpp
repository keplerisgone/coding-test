#include <iostream>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  constexpr int maxValue = 10000;
  int counts[maxValue + 1]{};
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    ++counts[a];
  }

  for (int value = 1; value <= maxValue; value++) {
    for (int i = 0; i < counts[value]; i++) {
      cout << value << '\n';
    }
  }

  return 0;
}
