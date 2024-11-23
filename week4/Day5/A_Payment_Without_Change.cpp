#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, n, S;
        cin >> a >> b >> n >> S;

        long long maxLargeCoins = min(a, S / n);
        long long remaining = S - maxLargeCoins * n;
        
        if (remaining <= b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
