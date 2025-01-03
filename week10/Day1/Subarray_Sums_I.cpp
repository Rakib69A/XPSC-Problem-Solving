#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll subArray(vector<ll>& a,int n, int x)
{
    ll sum = 0;
    int l = 0, r = -1;
    ll cnt = 0 ;
    while(r < n){
        while(r < n and sum < x){
            r++;
            sum += a[r];
        }
        while(l <= r and sum > x){
            sum -= a[l];
            l++;
        }
        if(sum == x){
            cnt++;
            sum -= a[l];
            l++;
        }
    }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << subArray(a,n, x) << endl;
    return 0;
}