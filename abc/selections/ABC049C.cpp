#include <bits/stdc++.h>
using namespace std;


int main() {
  string S;
  cin >> S;

  vector<int> ans = findAnswer(N, Y);
  cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;

  return 0;
}
