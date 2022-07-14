#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;

  cin >> N >> M;

  vector<int> ans(N, 0);

  for (int i = 0; i < M; i++) {
    int ai, bi;
    cin >> ai >> bi;
    ans.at(ai-1)++;
    ans.at(bi-1)++;
  }

  for (int i = 0; i < N; i++) {
    cout << ans.at(i) << endl;
  }

}
