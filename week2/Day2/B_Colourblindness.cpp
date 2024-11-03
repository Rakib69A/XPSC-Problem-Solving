#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    bool flag = true;
    for(int i=0;i<s1.size();i++){
        if((s1[i] == 'R' && s2[i] != 'R') || (s1[i] != 'R' && s2[i] == 'R')){
            flag = false;
            break;
        }

    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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