#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> partitions(200001);

  for (int i = 0; i < N; i++) {
    int l, r;
    cin >> l >> r;
    partitions.at(l) += 1;
    partitions.at(r) -= 1;
  }

  int unpaired = 0;
  int ans_l;

  for (int i = 0; i < 200001; i++) {
    int val = partitions.at(i);
    if (val == 0) continue;
    if(unpaired == 0 && val > 0) ans_l = i;

    unpaired += val;

    if(unpaired == 0 && val < 0) {
        cout << ans_l << " " << i << endl;
    }
  }
}
