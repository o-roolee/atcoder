#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = 0;
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  for (int i = 0; i < N; i++) {
    for (int j = i; j < N; j++) {
      for (int k = j; k < N; k++) {
        if (A.at(i) == (double)A.at(j) / A.at(k)) ans++;
        if (A.at(i) == (double)A.at(k) / A.at(j)) ans++;

        if (A.at(j) == (double)A.at(k) / A.at(i)) ans++;
        if (A.at(j) == (double)A.at(i) / A.at(k)) ans++;

        if (A.at(k) == (double)A.at(i) / A.at(j)) ans++;
        if (A.at(k) == (double)A.at(j) / A.at(i)) ans++;
      }
    }
  }


  cout << ans << endl;
  return 0;
}
