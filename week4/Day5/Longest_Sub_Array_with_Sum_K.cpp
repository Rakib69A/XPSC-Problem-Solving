#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int lenOfLongSubarr(vector<int>& arr, int k) {
    unordered_map<int, int> mp;
    int res = 0;
    int prefixSum = 0;

    for (int i = 0; i < arr.size(); ++i) {
        prefixSum += arr[i];

        if (prefixSum == k) {
            res = i + 1;
        }

        else if (mp.find(prefixSum - k) != mp.end()) {
            res = max(res, i - mp[prefixSum - k]);
        }

        if (mp.find(prefixSum) == mp.end()) {
            mp[prefixSum] = i;
        }
    }

    return res;
}

int main() {
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;
    cout << lenOfLongSubarr(arr, k) << endl;
    return 0;
}