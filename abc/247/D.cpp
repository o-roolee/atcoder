#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;

  vector<long long> queue_x;
  vector<long long> queue_c;

  for(int i = 0; i < Q; i++) {
    int q_type;
    cin >> q_type;

    if (q_type == 1) {
      long long x, c;
      cin >> x >> c;
      queue_x.push_back(x);
      queue_c.push_back(c);
    }

    if (q_type == 2) {
      long long c;
      cin >> c;

      long long ans = 0;

      while (c > 0) {
        int tmp_c = min(c, queue_c.at(0));

        ans += queue_x.at(0) * tmp_c;
        c -= tmp_c;
        queue_c.at(0) -= tmp_c;

        if (queue_c.at(0) <= 0) {
          queue_x.erase(queue_x.begin(), queue_x.begin()+1);
          queue_c.erase(queue_c.begin(), queue_c.begin()+1);
        }
      }

      cout << ans << endl;
    }
  }


  return 0;
}
