#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);

  for (int j = 0; j < N; j++) {
    cin >> a.at(j);
  }

  int i = 0;
  int ans = 0;

  while (i != 1) {
    i = a.at(i) - 1;
    ans++;

    if (ans == N) {
      ans = -1;
      break;
    }
  }

  cout << ans << endl;

}
