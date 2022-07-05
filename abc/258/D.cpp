#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll simClearTime(ll i, vector<ll> A, vector<ll> B, ll X) {
  ll clearTime = 0;

  for (ll j = 0; j < i; j++) {
    clearTime += A.at(j) + B.at(j);
    X--;
  }

  clearTime += X * B.at(i-1);

  return clearTime;
}

int main() {
  ll N, X;
  cin >> N >> X;

  vector<ll> A(N), B(N);


  for (ll i = 0; i < N; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  ll ans = numeric_limits<ll>::max();

  for (ll i = 1; i <= N; i++) {
    ll clearTime = simClearTime(i, A, B, X);
    ans = min(ans, clearTime);
  }

  cout << ans << endl;
}
