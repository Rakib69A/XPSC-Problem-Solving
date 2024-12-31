#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

typedef long long li;

const int N = 200 * 1000 + 13;
int n, a[N];

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    cin >> n;
    li sum = 0;
    int ma = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        ma = max(ma, a[i]);
    }

    int g = 0;
    for (int i = 0; i < n; i++) {
        g = gcd(g, ma - a[i]);
    }

    li ans = (li(ma) * n - sum) / g;
    cout << ans << ' ' << g << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
