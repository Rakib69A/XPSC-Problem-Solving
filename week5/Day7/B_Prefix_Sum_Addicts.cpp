#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> suffixSum(n + 1);

    for (ll i = n - k + 1; i <= n; ++i) {
        cin >> suffixSum[i];
    }

    if (k == 1) {
        cout << "YES" << endl;
        return;
    }

    vector<ll> differences(n + 1);
    for (ll i = n - k + 2; i <= n; ++i) {
        differences[i] = suffixSum[i] - suffixSum[i - 1];
    }

    if (!is_sorted(differences.begin() + n - k + 2, differences.end())) {
        cout << "NO" << endl;
        return;
    }

    if (suffixSum[n - k + 1] > differences[n - k + 2] * (n - k + 1)) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll testCases;
    cin >> testCases;
    while (testCases--) {
        solve();
    }

    return 0;
}
