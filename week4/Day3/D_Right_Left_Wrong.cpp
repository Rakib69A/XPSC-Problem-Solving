#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    string s;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> s;

    ll score = 0;
    int l = 0;

    while (l < n) {
        while (l < n && s[l] != 'L') l++;
        if (l >= n) break;

        int r = l + 1;

        while (r < n && s[r] != 'R') r++;
        if (r >= n) break;

        for (int i = l; i <= r; i++) {
            score += a[i];
        }

        l = r + 1;
    }

    cout << score << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
