#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s,t;
    cin>>s>>t;
    int count = 0;
    for(int a=0;a<=s;a++){
        for(int b=0;b<=s-a;b++){
            // if(a*b > t) break;
            int maximum_c = s-a-b;
            for(int c=0;c<=maximum_c;c++){
                if(a*b*c<=t)
                    count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}