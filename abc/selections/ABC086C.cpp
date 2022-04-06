#include <bits/stdc++.h>
using namespace std;


int main() {
  int N, t[101010], x[101010], y[101010];

  cin >> N;

  t[0] = 0;
  x[0] = 0;
  y[0] = 0;
  for (int i = 1; i <= N; i++) cin >> t[i] >> x[i] >> y[i];

  string ans = "Yes";

  for (int i = 1; i <= N; i++) {
    int d = abs(x[i] - x[i-1]) + abs(y[i] - y[i-1]);
    int dt = t[i] - t[i-1];
    int dd = dt - d;

    if (dd < 0 || dd % 2 != 0) {
      ans = "No";
      break;
    }
  }

  cout << ans << endl;
  return 0;
}

// int main() {
//   int N, t[101010], x[101010], y[101010];

//   cin >> N;
//   for (int i = 0; i < N; i++) cin >> t[i] >> x[i] >> y[i];

//   int t0 = 0;
//   int x0 = 0;
//   int y0 = 0;

//   string ans = "Yes";

//   for (int i = 0; i < N; i++) {
//     int d = abs(x0 - x[i]) + abs(y0 - y[i]);
//     int dt = t[i] - t0;

//     if (d - dt > 0) {
//       ans = "No";
//       break;
//     } else if ((d - dt) % 2 != 0) {
//       ans = "No";
//       break;
//     }

//     t0 = t[i];
//     x0 = x[i];
//     y0 = y[i];
//   }

//   cout << ans << endl;
//   return 0;
// }
