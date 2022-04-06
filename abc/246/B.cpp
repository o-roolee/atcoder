#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  double d, x, y;

  cin >> a >> b;

  d = pow(a*a + b*b, 0.5);
  x = a/d;
  y = b/d;

  cout << x << " " << y << endl;

  return 0;
}
