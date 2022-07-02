#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  string S;

  cin >> N >> Q;
  cin >> S;

  int X = 0;

  for (int i = 0; i < Q; i++) {
    int t, x;
    cin >> t >> x;

    if (t == 1) {
      X -= x;
      X = X % N;
    } else {
      x += N + X - 1;
      x = x % N;
      cout << S[x] << endl;
    }
  }
}
