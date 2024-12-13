#include <bits/stdc++.h>
using namespace std;

void solve() {
    long n;
    cin >> n;
    bool a[11] = {0};
    bool z[11] = {0};

    for (long p = 0; p < n; ++p) {
        long x;
        cin >> x;
        for (long u = 0; u <= 10; ++u) {
            if (x % 2) {
                a[u] = true;
            } else if (x % 2 == 0) {
                z[u] = true;
            }
            x /= 2;
        }
    }

    long res = 0;
    long mult = 1;
    for (long u = 0; u <= 10; ++u, mult *= 2) {
        res += mult * a[u] * z[u];
    }

    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
