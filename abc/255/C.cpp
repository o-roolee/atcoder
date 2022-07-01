#include <bits/stdc++.h>
using namespace std;

int main() {
  long long X, A, D, N;
  cin >> X >> A >> D >> N;

  if (D == 0) {
    cout << abs(A - X) << endl;
    return 0;
  }

  long long Z = A + D * (N - 1);

  if (D < 0) {
    int tmp = Z;
    Z = A;
    A = tmp;
    D = D * (-1);
  }

  long long ans;

  if (X > Z) {
    ans = X - Z;
  } else if (X < A) {
    ans = A - X;
  } else {
    ans = (X - A) % D;
  }

  cout << ans << endl;
}
