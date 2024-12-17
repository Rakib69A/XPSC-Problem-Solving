#include<bits/stdc++.h>
using namespace std;

string binary_representation(int number) {
    string binary_string = "";
    for (int i = 31; i >= 0; --i) {
        binary_string += (number & (1 << i) ? '1' : '0');
    }
    return binary_string;
}

set<int> get_factors(int number) {
    set<int> factors;
    for (int i = 1; i * i <= number; ++i) {
        if (number % i == 0) {
            factors.insert(i);
            if (i != number / i) {
                factors.insert(number / i);
            }
        }
    }
    return factors;
}

void solve() {
    int n;
    cin >> n;

    vector<int> set_bit_count(32, 0);
    for (int i = 0; i < n; ++i) {
        int current_number;
        cin >> current_number;
        string binary_form = binary_representation(current_number);

        for (int bit_position = 31; bit_position >= 0; --bit_position) {
            if (binary_form[bit_position] == '1') {
                ++set_bit_count[31 - bit_position];
            }
        }
    }

    int gcd_of_counts = 0;
    for (int i = 0; i < 32; ++i) {
        gcd_of_counts = __gcd(gcd_of_counts, set_bit_count[i]);
    }

    set<int> result_factors = get_factors(gcd_of_counts);

    if (result_factors.empty()) {
        for (int i = 1; i <= n; ++i) {
            cout << i << ' ';
        }
    } else {
        for (auto& factor : result_factors) {
            cout << factor << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
