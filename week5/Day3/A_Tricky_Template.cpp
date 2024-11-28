#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;

    bool conflict = false;
    for (int i = 0; i < n; ++i) {
        if (a[i] != c[i] && b[i] != c[i]) {
            conflict = true;
            break;
        }
    }

    cout << (conflict ? "YES" : "NO") << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
