#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
		cin>>n;
		int sum0=0;
		bool flag=false;
		for(int i=1;i<=n;i++) {
			int x;
			cin>>x;
			if(x==0) {
				sum0++;
			} else if(x>=2) {
				flag=true;
			}
		}
		if(sum0<=(n+1)/2) {
			cout<<"0"<<endl;
		} else if(flag || sum0==n) {
			cout<<"1"<<endl;
		} else {
			cout<<"2"<<endl;
		}
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