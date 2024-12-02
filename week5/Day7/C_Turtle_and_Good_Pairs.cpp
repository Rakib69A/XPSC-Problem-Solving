#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll T;
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        map<char, ll> frequency;
        for (const auto &ch : s)
            frequency[ch]++;

        vector<pair<ll, char>> sortedChars;
        for (const auto &entry : frequency)
            sortedChars.push_back({entry.second, entry.first});

        sort(sortedChars.rbegin(), sortedChars.rend());

        ll currentIndex = 0;
        string result(n, '$');

        for (const auto &entry : sortedChars) {
            ll freq = entry.first;
            char character = entry.second;

            while (freq--) {
                if (currentIndex >= n) 
                    currentIndex = 1;
                result[currentIndex] = character;
                currentIndex += 2;
            }
        }

        cout << result << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
