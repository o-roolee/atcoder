#include <bits/stdc++.h>
using namespace std;

int main() {
  int K;
  cin >> K;

  int H = (21 + (K / 60)) % 24;
  int M = K % 60;

  cout << setw(2) << setfill('0') << H << ":" << setw(2) << setfill('0') << M << endl;
}
