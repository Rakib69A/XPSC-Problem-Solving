#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int result = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            result |= x;
        }
        cout << result << endl;
    }
    return 0;
}