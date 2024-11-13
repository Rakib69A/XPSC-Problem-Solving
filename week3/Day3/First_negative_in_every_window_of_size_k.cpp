#include<bits/stdc++.h>
using namespace std;

vector<int> firstNegativeInWindow(const vector<int>& arr, int k) {
    vector<int> ans;
    queue<int> neg; 

    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            neg.push(i);
        }
    }
    if (!neg.empty()) {
        ans.push_back(arr[neg.front()]);
    } else {
        ans.push_back(0);
    }
    for (int i = k; i < arr.size(); i++) {
        if (!neg.empty() && neg.front() <= i - k) {
            neg.pop();
        }
        if (arr[i] < 0) {
            neg.push(i);
        }

        if (!neg.empty()) {
            ans.push_back(arr[neg.front()]);
        } else {
            ans.push_back(0);
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;
    vector<int> result = firstNegativeInWindow(arr, k);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
