#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll total_numbers, num_a, num_b, price_a, price_b, max_number;
    ll divisible_a, divisible_b, common_divisible;
    ll lcm_value;

    cin >> total_numbers >> num_a >> num_b >> price_a >> price_b;

    divisible_a = total_numbers / num_a;
    divisible_b = total_numbers / num_b;

    lcm_value = (num_a * num_b) / __gcd(num_a, num_b);
    common_divisible = total_numbers / lcm_value;

    divisible_a -= common_divisible;
    divisible_b -= common_divisible;

    ll result = (divisible_a * price_a) + (divisible_b * price_b) + (max(price_a, price_b) * common_divisible);

    cout << result;

    return 0;
}
