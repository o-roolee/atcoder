// #include <bits/stdc++.h>
// using namespace std;

// long long foo(long long B, long long K, long long Z) {
//   long long w = Z % B;
//   return min(K*(B-w), K*w+B);
// }

// long long bar(long long B, long long K, long long Z) {
//   long long w = Z % B;
//   return min(K*w, K*(B-w));
// }

// void solve() {
//   long long B, K, Sx, Sy, Gx, Gy;
//   cin >> B >> K >> Sx >> Sy >> Gx >> Gy;

//   long long ans = 0;
//   long long abs_x = abs(Sx-Gx);
//   long long abs_y = abs(Sy-Gy);
//   long long P1, P2;

//   if (abs_x > abs_y) {
//     ans += abs_x;

//     int p1 = min(Sx, Gx);
//     int p2 = max(Sx, Gx);

//     ans += foo(B, K, p1);
//     ans += bar(B, K, p2);

//   } else if (abs_y >= abs_x) {
//     ans += abs_y;
//     int p1 = min(Sy, Gy);
//     int p2 = max(Sy, Gy);

//     ans += foo(B, K, p1);
//     ans += bar(B, K, p2);
//   } else {

//   }
//   cout << ans << endl;
// }

// int main() {
//   long long T;
//   cin >> T;

//   for (long long i = 0; i < T; i++) {
//     solve();
//   }
// }
