#include <iostream>
using namespace std;

void solve() {
    long long x, y, k;
    cin >> x >> y >> k;

    while (k > 0 && x != 1) {
        long long remainder = (x / y + 1) * y - x;
        remainder = max(1LL, remainder);
        remainder = min(remainder, k);

        x += remainder;
        while (x % y == 0) {
            x /= y;
        }

        k -= remainder;
    }

    cout << x + k % (y - 1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
