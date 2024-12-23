#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }

        if (ar[n - 1] == 1) {
            cout << "NO" << endl;
            continue;
        }

        vector<int> ans;
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (ar[i] == 0) {
                if (cnt > 0) {
                    ans.back() = cnt;
                    cnt = 0;
                }
                ans.push_back(0);
            } else {
                cnt++;
                ans.push_back(0);
            }
        }

        if (cnt > 0) {
            ans.back() = cnt;
        }

        cout << "YES" << endl;
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
