#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n;
        int cnt0 = 0, cnt1 = 0;
        for (int i = 1; i <= n; ++i) {
            cin >> x;
            if (x == 0) cnt0++;
            if (x == 1) cnt1++;
        }
        cout << (1ll << cnt0) * (ll)cnt1 << '\n';
    }
    return 0;
}