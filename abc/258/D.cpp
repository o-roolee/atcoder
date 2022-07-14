#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;


int main() {
  ll N, X;
  cin >> N >> X;

  vector<ll> A(N), B(N);
  rep(i, N) cin >> A[i] >> B[i];

  ll ans = LLONG_MAX;
  ll s = 0;

  rep(r, N) {
    X--;
    if (X < 0) break;
    s += A[r] + B[r];
    ll now = s + B[r]*X;
    ans = min<ll>(ans, now);
  }

  cout << ans << endl;
}
