#include<bits/stdc++.h>
using namespace std;

int maxSumSubArray(const vector<int>& arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }
    
    int mx = sum;

    for (int i = k; i < arr.size(); i++) {
        sum += arr[i] - arr[i - k];
        mx = max(mx, sum);
    }
    
    return mx;
}

int main() {
    vector<int> arr = {100, 200, 300, 400};
    int k = 2;
    cout << maxSumSubArray(arr, k) << endl;
    return 0;
}
