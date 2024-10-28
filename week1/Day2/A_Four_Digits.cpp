#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    string str = to_string(n);
    int size = str.size();
    // cout<<"Size : "<<size<<endl;
    if(size == 4) cout<<str<<endl;
    else{
        string s = "";
        for(int i=0;i<4 - size;i++){
            s += "0";
            // cout<<s<<endl;
        }
        cout<<s+str<<endl;
    }
    return 0;
}