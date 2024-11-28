#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;
	cin>>n>>m;
	if((n%2==0 and m%2==1) || n > m )
		cout<<"NO"<<endl;
	else if(n%2==1){
		cout<<"YES"<<endl;
		for(int i=0;i<n-1;i++){
			cout<<1<<" ";
		}
		cout<<(m-n+1)<<endl;
	}
	else{
		cout<<"YES"<<endl;
		for(int i=0;i<n-2;i++){
			cout<<1<<" ";
		}
		cout<<(m-n+2)/2<<" "<<(m-n+2)/2<<endl;
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