#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int result = 0;
        for (char c : "ABCD") {
            result += min(n, (int)count(s.begin(), s.end(), c));
        }
        
        cout << result << endl;
    }

    return 0;
}
