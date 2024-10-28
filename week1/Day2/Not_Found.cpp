#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    vector<bool> isPresent(26,false);

    for(char c : s)
        isPresent[c - 'a'] = true;
    
    string ans = "None";

    for(int i=0;i<26;i++){
        if(!isPresent[i]){
            ans = 'a' + i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}