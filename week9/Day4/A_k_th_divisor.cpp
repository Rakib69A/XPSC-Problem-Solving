#include<bits/stdc++.h>
using namespace std;

void get_divisors(vector<long long int> &divs, long long int n) {
    long long int lim = sqrt(n);
    for(int i = 1; i <= lim; i++) {
        if(n % i == 0) {
            divs.push_back(i);
            if(n / i != i) {
                divs.push_back(n / i);
            }
        }
    }
}

int main() {
    long long int n, k;
    scanf("%lld%lld", &n, &k);

    vector<long long int> divs;
    get_divisors(divs, n);
    sort(divs.begin(), divs.end());

    if(k > (int)divs.size()) {
        puts("-1");
    } else {
        printf("%lld\n", divs[k - 1]);
    }

    return 0;
}
