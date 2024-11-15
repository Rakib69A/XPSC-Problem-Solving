#include <iostream>
#include <vector>
#include <string>
using namespace std;

int solve(const string& pat, const string& txt) {

    int n = txt.size();
    int k = pat.size();

    if (k > n) return 0;

    vector<int> patFreq(26, 0); 
    vector<int> winFreq(26, 0); 

    for (int i = 0; i < k; i++) {
        patFreq[pat[i] - 'a']++;
        winFreq[txt[i] - 'a']++;
    }

    int count = 0;

    if (patFreq == winFreq) {
        count++;
    }

    for (int i = k; i < n; i++) {
        winFreq[txt[i] - 'a']++;
        winFreq[txt[i - k] - 'a']--;

        if (patFreq == winFreq) {
            count++;
        }
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string txt = "forxxorfxdofr";
    string pat = "for";
    cout << solve(pat, txt) << endl; 

    txt = "aabaabaa";
    pat = "aaba";
    cout << solve(pat, txt) << endl; 

    return 0;
}
