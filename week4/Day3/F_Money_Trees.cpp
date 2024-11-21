#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), h(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> h[i];

    int l = 0;           
    ll sum = 0;           
    int max_len = 0;      

    for (int r = 0; r < n; r++) {  
        sum += a[r];

      
        while (l < r && (sum > k || h[l] % h[l + 1] != 0)) {
            sum -= a[l];
            l++;
        }

       
        if (r > 0 && h[r - 1] % h[r] != 0) {
            l = r;
            sum = a[r];
        }

       
        if (sum <= k) {
            max_len = max(max_len, r - l + 1);
        }
    }

    cout << max_len << endl;
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
