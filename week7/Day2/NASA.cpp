#include<bits/stdc++.h>
using namespace std;

vector<int>allPalindrome;

bool isPalindrome(int num){
	int rev=0;
	int temp=num;
	while (num>0){
		rev=rev*10 + (num%10);
		num/=10;
	}
	return (rev==temp);
}
void solve(){
	long long int n;
	cin>>n;
	long long int v[n];
	long long int freq[(1<<17)];
	memset(freq,0,sizeof(freq));
	for (int i=0;i<n;i++){
		cin>>v[i];
		freq[v[i]]++;
	}
    long long int ans=0;
	for (int i=0;i<allPalindrome.size();i++){
		long long int num=allPalindrome[i];
		for (int j=0;j<n;j++){
			ans+=freq[v[j]^num];	
		}
	}

	ans/=2;

    for (int i=0;i<(1<<17);i++){
        ans = ans + (freq[i] * (freq[i]+1))/2;

    }
	cout<<ans<<endl;
}

void generatePalindromes(){
	for (int i=1;i<=(1<<17);i++){
		if (isPalindrome(i)){
			allPalindrome.push_back(i);
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin>>t;
	generatePalindromes();
	while (t--){
		solve();
	}
}