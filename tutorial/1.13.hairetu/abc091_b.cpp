#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  for (int i = 0; i < N; i++) cin >> S.at(i);

  int M;
  cin >> M;
  vector<string> T(M);
  for (int i = 0; i < M; i++) cin >> T.at(i);

  int max_point = 0;

  for (int i = 0; i < N; i++) {
    int point = 0;
    string si = S.at(i);

    for (int j = 0; j < N; j++) if (si == S.at(j)) point++;
    for (int k = 0; k < M; k++) if (si == T.at(k)) point--;

    max_point = max(max_point, point);
  }

  cout << max_point << endl;
}
