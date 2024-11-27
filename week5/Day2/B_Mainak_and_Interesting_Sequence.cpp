#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int N, M;
	cin >> N >> M;

	if(((N % 2 == 0) && (M % 2 == 1)) || (M < N)){ // impossible cases, M < N and (M - odd, N - even)
		cout << "NO\n";
	}else if((N % 2) == 1){ // (N - odd)
		cout << "YES\n";
		for(int i = 1; i < N; ++i){
			cout << "1 ";
		}
		cout << M - N + 1 << '\n';
	}else{ // (N - even, M - even)
		cout << "YES\n";
		for(int i = 2; i < N; ++i){
			cout << "1 ";
		}
		cout << (M - N + 2) / 2 << ' ' << (M - N + 2) / 2 << '\n';
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