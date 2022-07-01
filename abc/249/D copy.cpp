#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = 0;
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < N; k++) {
        if (A.at(k) == (double)A.at(i) / A.at(j)) ans++;
      }
    }
  }


  cout << ans << endl;
  return 0;
}
