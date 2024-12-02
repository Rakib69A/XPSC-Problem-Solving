#include <bits/stdc++.h>
#define ll long long 
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    ll totalSum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        totalSum += a[i];
    }

    ll result = totalSum - 2LL * a[n - 2];
    cout << result << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
