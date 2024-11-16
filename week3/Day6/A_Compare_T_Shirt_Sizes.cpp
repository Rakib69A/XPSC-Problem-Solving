#include <iostream>
#include <string>
using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;

    char ca = a.back(), cb = b.back();

    if (ca == cb) {
        if (a.size() == b.size())
            cout << "=";
        else if (ca == 'S')
            cout << (a.size() < b.size() ? '>' : '<');
        else
            cout << (a.size() < b.size() ? '<' : '>');
    } else {
        cout << (ca < cb ? '>' : '<');
    }
    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
