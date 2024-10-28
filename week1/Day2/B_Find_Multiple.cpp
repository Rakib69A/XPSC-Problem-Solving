#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    int ans = -1;
    int i = 1;
    while(1){
        if(c*i >= a && c*i <= b){
            ans = c*i;
            break;
        }
        else if(c*i > b){
            ans = -1;
            break;
        }
        else{
            i++;
        }
    }
    cout<<ans<<endl;

    return 0;
}