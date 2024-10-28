#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<char> v = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s',
    't','u','v','w','x','y','z'};
    string s;
    cin>>s;
    set<char> charSet;
    for(char ch : s){
        charSet.insert(ch);
    }
    // cout<<charSet.size()<<endl;
    int i=0;
    for(char ch : charSet){
        if(v[i] != ch){
            break;
        }
        i++;
    }
    if(i == 26) cout<<"None"<<endl;
    else cout<<v[i]<<endl;
    return 0;
}