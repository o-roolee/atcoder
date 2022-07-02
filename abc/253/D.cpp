#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
  if ( a % b == 0) {
    return b;
  } else {
    return gcd(b, a % b);
  }
}

long long lcm(long long a, long long b) {
  return a * b / gcd(a, b);
}


int main() {
  long long N, A, B;
  cin >> N >> A >> B;

  long long C = lcm(A, B);

  long long kA = N / A;
  long long kB = N / B;
  long long kC = N / C;


  long long sum_N = N * (N+1) / 2;
  long long sum_A = A * (kA * (kA+1) / 2);
  long long sum_B = B * (kB * (kB+1) / 2);
  long long sum_C = C * (kC * (kC+1) / 2);

  long long ans = sum_N - sum_A - sum_B + sum_C;

  cout << ans << endl;

}
