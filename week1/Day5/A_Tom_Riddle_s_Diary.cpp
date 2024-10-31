#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    map<string,bool> mp;
    vector<string> diary;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        diary.push_back(s);
        mp[s] = true;
    }
    for(string val : diary){
        if(mp[val]){
            cout<<"NO"<<endl;
            mp[val] = false;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}