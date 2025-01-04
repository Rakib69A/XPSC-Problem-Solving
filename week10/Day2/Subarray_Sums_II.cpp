#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(vector<ll>& arr, ll X, ll N) {
    map<ll, ll> prefSums;
    prefSums[0] = 1;
    ll pref = 0;
    ll cnt = 0;

    for (int i = 0; i < N; ++i) {
        pref += arr[i];
        cnt += prefSums[pref - X];
        prefSums[pref] += 1;
    }
    return cnt;
}

int main() {
    ll N = 5, X = 3;
    vector<ll> arr = { 1, 1, 1, -1, 1 };

    cout << solve(arr, X, N);
    return 0;
}
