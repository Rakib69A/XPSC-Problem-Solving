#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        vector<int> cnt(2, 0);
        for (char c : s) {
            cnt[c - '0']++;
        }

        for (size_t i = 0; i <= s.length(); ++i) {
            if (i == s.length() || cnt[1 - (s[i] - '0')] == 0) {
                cout << s.length() - i << endl;
                break;
            }
            cnt[1 - (s[i] - '0')]--;
        }
    }

    return 0;
}
