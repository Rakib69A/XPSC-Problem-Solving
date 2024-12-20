#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll inf    = 1e9;
void solve(){
    int n, q;
        cin >> n >> q;
        vector<int> a(n), b(q);
        for (auto& i : a) {
            cin >> i;
        }
        for (auto& i : b) {
            cin >> i;
        }
        vector<int> smallerIdx(35, inf);
        for (int i = 0; i < q; i++) {
            if (smallerIdx[b[i]] == inf) {
                smallerIdx[b[i]] = i;
            }
        }
        for (int i = 0; i < n; i++) {
            int firstIdx = inf;
            for (int j = 1; j <= 30; j++) {
                if (a[i] % (1 << j) == 0) {
                    firstIdx = min(firstIdx, smallerIdx[j]);
                }
            }
            while (firstIdx < q) {
                a[i] += (1 << (b[firstIdx] - 1));
                int x = b[firstIdx] - 1;
                int xx = inf;
                while(x >= 0) {
                    if(smallerIdx[x] != inf && smallerIdx[x] > firstIdx) {
                        xx = min(xx, smallerIdx[x]);
                    }
                    x--;
                }
                firstIdx = xx;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " \n"[i == n - 1];
        }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}