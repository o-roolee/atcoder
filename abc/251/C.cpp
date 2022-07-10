#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)


int main() {
  int n;
  cin >> n;

  vector<string> s(n);
  vector<int> t(n);
  rep(i, n) cin >> s[i] >> t[i];

  set<string> st;
  int ans = -1;
  int high_score = -1;

  rep(i, n) {
    if (st.count(s[i]) == 0) {
      st.insert(s[i]);
      if (t[i] > high_score) {
        ans = i+1;
        high_score = t[i];
      }
    }
  }

  cout << ans << endl;
  return 0;
}
