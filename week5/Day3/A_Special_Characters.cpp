#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    if (n % 2 == 1) {
      cout << "NO" << '\n';
      return;
    }
    cout << "YES" << '\n';
    for (int i = 0; i < n / 2; ++i)
      for (int j = 0; j < 2; ++j)
        cout << "AB"[i & 1];
    cout << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}