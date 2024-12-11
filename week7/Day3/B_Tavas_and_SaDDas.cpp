#include <bits/stdc++.h>
using namespace std;
void solve(){
    string n;
    cin >> n;
    long long ans = 1;
    
    for (char x : n) {
        ans = 2 * ans + (x == '7' ? 1 : 0);
    }
    
    cout << ans - 1 << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}