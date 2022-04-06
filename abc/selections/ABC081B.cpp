#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int A[210];

  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int ans = 0;

  while (true) {
    bool exist_odd = false;

    for (int i = 0; i < N; i++) {
      if (A[i] % 2 != 0) {
        exist_odd = true;
        break;
      }
    }

    if (exist_odd) break;

    for (int i = 0; i < N; i++) A[i] /= 2;
    ans++;
  }

  cout << ans << endl;
  return 0;
}
