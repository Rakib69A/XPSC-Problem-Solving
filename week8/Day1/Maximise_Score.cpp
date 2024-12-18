#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> a(n),b;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        int left = -1;
        int right = -1;
        
        if(i-1 >= 0) left = abs(a[i]-a[i-1]);
        if(i+1 < n) right = abs(a[i]-a[i+1]);
        mn = min(mn,max(left,right));
        // b.push_back(max(left,right));
    }
    cout<<mn<<endl;
    // int mini = INT_MAX;
    // for(int i=0;i<b.size();i++)
    //     mini = min(mini,b[i]);
    // cout<<mini<<endl;
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