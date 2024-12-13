#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin>>n;
	int b = 0;
	int msb = (int)log2(n);
	int a = msb;
	int ans = 1;
	bool check = false;
	for(int i = msb-1;i>=0;i--){
		if(n & (1<<i)){
			b = b | (1<<i);
			check = true;
		}
		else{
			if(check) ans = ans*2;
		}
	}
	cout<<ans<<endl;
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