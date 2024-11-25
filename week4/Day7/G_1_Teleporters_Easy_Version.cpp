#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        vector<int> costs(n);
        for (int i = 0; i < n; ++i) costs[i] = a[i] + (i + 1);
        sort(costs.begin(), costs.end());
        int count = 0;
        for (int cost : costs) {
            if (c >= cost) {
                c -= cost;
                ++count;
            } else break;
        }
        cout << count << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
