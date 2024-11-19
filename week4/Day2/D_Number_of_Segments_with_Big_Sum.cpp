#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll s;
    cin >> n >> s;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll sum = 0, ans = 0;
    int l = 0;

    for (int r = 0; r < n; r++) {
        sum += a[r];

        while (sum >= s) {
            ans += (n - r);
            sum -= a[l++];
        }
    }

    cout << ans << endl;

    return 0;
}
