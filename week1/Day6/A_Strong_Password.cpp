#include <bits/stdc++.h>
using namespace std;

int time(string &s) {
    int time = 2; 
    for (int i = 1; i < s.size(); ++i) {
        int x = (s[i] == s[i - 1]) ? 1 : 2;
        time += x;
    }
    return time;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        map<char, bool> mp;
        for (char c : s) {
            mp[c] = true;
        }

        string bestPassword;
        int maxTime = 0;

        for (int i = 0; i <= s.size(); ++i) {  
            for (char ch = 'a'; ch <= 'z'; ++ch) {  
                if (!mp[ch] || i == 0 || i == s.size() || (i > 0 && ch != s[i-1])) {
                    
                    string newPassword = s.substr(0, i) + ch + s.substr(i);
                    int currentTime = time(newPassword);

                    if (currentTime > maxTime) {
                        maxTime = currentTime;
                        bestPassword = newPassword;
                    }
                }
            }
        }
        cout << bestPassword << endl;
    }
    return 0;
}
