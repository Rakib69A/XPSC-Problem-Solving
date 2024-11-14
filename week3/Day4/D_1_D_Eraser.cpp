#include <bits/stdc++.h>
using namespace std;
int solve(int n, int k, const string &s) {
    int cnt = 0, i = 0;
    while(i < n){
        if (s[i] == 'B') {
            cnt++;
            i += k;
        } else {
            i++;
        }
    }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        cout << solve(n, k, s) << endl;
    }
    return 0;
}