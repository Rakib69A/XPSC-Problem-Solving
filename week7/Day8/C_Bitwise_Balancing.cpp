#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll a = 0, b, c, d, pos = 1, bit_b, bit_c, bit_d, mask = 1;
    cin >> b >> c >> d;
    
    for (ll i = 0; i < 62; i++) {
        bit_b = (b & mask) ? 1 : 0;
        bit_c = (c & mask) ? 1 : 0;
        bit_d = (d & mask) ? 1 : 0;
        
        if ((bit_b && !bit_c && !bit_d) || (!bit_b && bit_c && bit_d)) {
            pos = 0;
            break;
        }
        
        if (bit_b && bit_c) {
            a += (1 - bit_d) * mask;
        } else {
            a += bit_d * mask;
        }
        
        mask <<= 1;
    }
    
    cout << (pos ? a : -1) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
