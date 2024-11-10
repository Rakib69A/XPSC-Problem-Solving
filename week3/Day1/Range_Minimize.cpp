#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    if (n <= 3)
    {
        cout << "0\n";
        return;
    }
    int range = A[n - 1] - A[0];
    range = min(range, A[n - 1] - A[2]);
    range = min(range, A[n - 2] - A[1]);
    range = min(range, A[n - 3] - A[0]);
    cout << range << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
