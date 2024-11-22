//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &a, int k) {
        // your code here
        int n = a.size();
        int l = 0,r=0;
        int ans = 0;
        map<char,int> mp;
        while(r<n){
            mp[a[r]]++;
            if(mp.size()==k)
                ans = max(ans,r-l+1);
            while(mp.size() > k){
                mp[a[l]]--;
                if(mp[a[l]] == 0)
                    mp.erase(a[l]);
                l++;
            }
            r++;
        }
        return (ans == 0 ? -1 : ans);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends