#include <bits/stdc++.h>
using namespace std;

int main() {
  string ans = "Yes";

  int N;
  cin >> N;

  vector<vector<string>> a(3, vector<string>(4));
  for (int i = 0; i < N; i++) cin >> a.at(i).at(0) >> a.at(i).at(1);

  for (int i = 0; i < N-1; i++) {
    string x = a.at(i).at(0);
    string y = a.at(i).at(1);

    bool x_flag = false;
    bool y_flag = false;


    for (int j = i+1; j < N; j++) {
      if (x == a.at(j).at(0) || x == a.at(j).at(1)) {
        x_flag = true;
      }

      if (y == a.at(j).at(0) || y == a.at(j).at(1)) {
        y_flag = true;
      }

      if (x_flag && y_flag) {
        ans = "No";
        break;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
