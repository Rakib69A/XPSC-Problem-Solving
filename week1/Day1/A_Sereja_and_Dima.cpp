#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long int sum1 = 0, sum2 = 0;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        // Sereja's move
        if (v[i] >= v[j])
        {
            sum1 += v[i];
            i++;
        }
        else
        {
            sum1 += v[j];
            j--;
        }
        if (i > j)
            break;

        // Dima's Move
        else
        {
            if (v[i] >= v[j])
            {
                sum2 += v[i];
                i++;
            }
            else
            {
                sum2 += v[j];
                j--;
            }
        }
    }
    cout << sum1 << " " << sum2 << endl;
    return 0;
}