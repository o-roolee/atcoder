#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int d[101] = {0};

  cin >> N;
  int ans = 0;

  for (int i = 0; i < N; i++) {
    int j;
    cin >> j;
    d[j]++;
    if (d[j] == 1) ans++;
  }

  cout << ans << endl;
  return 0;
}
