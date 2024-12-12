#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1,s2;
    cin>>s1>>s2;
    int sum1 = 0, sum2 = 0, n = 0;
    for(char c : s1){
        sum1 += (c == '+' ? 1 : -1);
    }
    for(char c : s2){
        if(c=='+' || c=='-')
            sum2 += (c == '+' ? 1 : -1);
        else 
            n++;
    }
    // cout<<sum1<<" "<<sum2<<endl;
    // cout<<"Q_mark = "<<n<<endl;
    vector<int> v;
    int ans = 0;
    for(int i=0;i<(1<<n);i++){
        // cout<<i<<" -> ";
        int cnt = 0;
        for(int k=0;k<n;k++){
            if((i >> k) & 1){
                // cout<<1<<" ";
                cnt++;
            }
            else{
                // cout<<0<<" ";
                cnt--;
            } 
            // x += cnt;  
        }
        cout<<endl;
        v.push_back(cnt);
        //  if(sum1 == x) ans++;
    }
    // cout<<ans<<endl;
    for(int val : v){
        int x = sum2;
        x += val;
        if(sum1 == x) ans++;
        // cout<<x<<" ";
    }
    // cout<<endl<<"Ans = "<<ans<<endl;
    cout<<fixed<<setprecision(20)<<1.0*ans/(1 << n)<<endl;
    return 0;
}