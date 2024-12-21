#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int OR = a[0];
    int AND = a[0];
    for(int i=1;i<n;i++){
        OR |= a[i];
        AND &= a[i];
    }
    cout<<OR-AND<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}