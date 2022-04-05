#include "bits/stdc++.h"
using namespace std;

int main() {
  int N;
  cin >> N;

  int sum = 0; // 合計点を表す変数
  int x;       // 入力を受け取る変数
  int i = 0;   // カウンタ変数

  while (i < N) {
    cin >> x;
    sum += x;
    i++;
  }

  cout << sum << endl;
}
