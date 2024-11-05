#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
        cin >> n;
        map<int,int>M; int p;
        int res = n%2;
        for(int i=0;i<n;i++)
        {
            cin >> p; M[p]++;
            res=max(res,M[p]);
        }
        if(res>n/2)
        {
            cout<<2*res - n<<endl;
        }
        else{
            cout<<n%2<<endl;
        }
}
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}