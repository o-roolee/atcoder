#include <bits/stdc++.h>
using namespace std;


vector<int> findAnswer(int N, int Y) {
  for (int i = N; i >= 0; i--) {
    for (int j = N - i; j >= 0; j--) {
      int k = N - i - j;
      int x = 10000 * i + 5000 * j + 1000 * k;
      if (x == Y) return {i, j, k};
    }
  }

  return {-1, -1, -1};
}


int main() {
  int N, Y;
  cin >> N >> Y;

  vector<int> ans = findAnswer(N, Y);
  cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;

  return 0;
}
