#include <bits/stdc++.h>
using namespace std;


string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
  string S;
  cin >> S;

  string word = "dream";
  cout << S.substr(S.size() - word.size(), S.size()) << endl;
  cout << S.substr(0, S.size() - word.size()) << endl;


  // bool flag = true;
  // while (flag) {
  //   for (string word: divide) {
  //     string subs = S.substr(S.size() - word.size(), S.size());
  //     if (subs == word) {
  //       S = S.substr(0, S.size() - word.size());
  //       break;
  //     }
  //     flag = false;
  //   }
  // }

  // if (S.size() == 0) cout << "YES" << endl;
  // else cout << "NO" << endl;

}
