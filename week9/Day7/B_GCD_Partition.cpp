#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long totalSum = accumulate(a.begin(), a.end(), 0LL), prefixSum = 0, maxGCD = 1;
        for (int i = 0; i < n - 1; i++) {
            prefixSum += a[i];
            totalSum -= a[i];
            maxGCD = max(maxGCD, __gcd(prefixSum, totalSum));
        }

        cout << maxGCD << "\n";
    }

    return 0;
}
