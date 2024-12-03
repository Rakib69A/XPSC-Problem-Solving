#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;cin>>n>>k;
	vector<int> v;
	for(int i=n;i>k+1;i--)
		cout<<i<<" ";
	for(int i=1;i<=k+1;i++){
		cout<<i<<" ";
	}
	cout<<endl;
	

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