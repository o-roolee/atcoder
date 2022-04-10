#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;
  vector<int> vec_x;
  vector<int> vec_c;

  for(int i = 0; i < Q; i++) {
    int q_type;
    int x, c;

    cin >> q_type;

    if (q_type == 1) {
      cin >> x >> c;
      vec_x.push_back(x);
      vec_c.push_back(c);
    }

    if (q_type == 2) {
      int ans = 0;
      cin >> c;

      int tmp_x = vec_x.at(0);
      int tmp_c = vec_c.at(0);

      while (c > 0) {
        if (tmp_c - c > 0) {
          tmp_c -= c;
          ans += tmp_x * c;
          c = 0;
        } else {
          ans += tmp_x * tmp_c;
          vec_c.erase(vec_c.begin()+1);
          vec_x.erase(vec_x.begin()+1);
          c -= tmp_c;
          int tmp_c = vec_c.at(0);
          int tmp_x = vec_x.at(0);

          cout << tmp_x << endl;
          cout << tmp_c << endl;
        }
      }
      cout << ans << endl;
    }
  }


  return 0;
}
