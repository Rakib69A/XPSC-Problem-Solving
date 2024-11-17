#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));

    // Input the grid
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    vector<long long> d1(n + m - 1, 0); 
    vector<long long> d2(n + m - 1, 0); 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            d1[i - j + m - 1] += a[i][j];
            d2[i + j] += a[i][j];
        }
    }

    long long max_sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long sum = d1[i - j + m - 1] + d2[i + j] - a[i][j];
            max_sum = max(max_sum, sum);
        }
    }

    cout << max_sum << '\n';
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