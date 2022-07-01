#include <bits/stdc++.h>
using namespace std;

int Q;
int t;
long long x, c;
vector<long long> q1_x;
vector<long long> q1_c;
vector<long long> q2_c;
int tmp_c;
long long ans;


int main() {
  cin >> Q;

  for(int i = 0; i < Q; i++) {
    cin >> t;

    if (t == 1) {
      cin >> x >> c;
      q1_x.push_back(x);
      q1_c.push_back(c);
    } else {
      cin >> c;
      q2_c.push_back(c);
    }
  }

  while (q2_c.size() > 0) {
    c = q2_c.at(0);
    ans = 0;

    while (c > 0) {
      tmp_c = min(c, q1_c.at(0));

      ans += q1_x.at(0) * tmp_c;
      c -= tmp_c;
      q1_c.at(0) -= tmp_c;

      if (q1_c.at(0) <= 0) {
        q1_x.erase(q1_x.begin(), q1_x.begin()+1);
        q1_c.erase(q1_c.begin(), q1_c.begin()+1);
      }
    }

    cout << ans << endl;
  }
}
