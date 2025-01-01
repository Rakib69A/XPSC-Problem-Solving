#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int q;
    cin >> q;

    while (q--) {
        int a, b;
        cin >> a >> b;

        if (b == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            long long first = a;
            long long second = a * (long long)b;
            long long third = a * (long long)(b + 1);
            cout << first << ' ' << second << ' ' << third << endl;
        }
    }

    return 0;
}
