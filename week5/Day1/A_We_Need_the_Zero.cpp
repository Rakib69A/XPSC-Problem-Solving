#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int xorSum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            xorSum ^= a[i];
        }

        if (xorSum == 0) {
            cout << 0 << endl;
        } else {
            if (n % 2 == 1) {
                cout << xorSum << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}