#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string,bool> mp;
    stack<string> st;
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
        mp[s] = true;
    }
    reverse(v.begin(),v.end());
    for(auto val : v){
        if(mp[val]){
            st.push(val);
            mp[val] = false;
        }
    }
    vector<string> result;
    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(),result.end());
    for(string s : result)
        cout<<s<<endl;
    return 0;
}