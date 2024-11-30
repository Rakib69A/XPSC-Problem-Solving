#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
        cin >> n;
        string s;
        cin >> s;
        string t = s;
        reverse(t.begin(), t.end());
        cout << min(s, t + s) << endl;
}
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int tt;
    std::cin >> tt;
    while (tt--) {
        solve();
    }

    return 0;
}