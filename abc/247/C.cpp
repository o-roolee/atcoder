#include <bits/stdc++.h>
using namespace std;

string foo(string s, int i) {
  s = s + " " + to_string(i) + " " + s;
  return s;
}

int main() {
  int N;
  cin >> N;
  string S = "1";

  for (int i = 2; i <= N; i++){
    S = foo(S, i);
  }

  cout << S << endl;
  return 0;
}
