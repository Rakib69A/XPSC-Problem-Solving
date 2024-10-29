#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    vector<int> v(n);
    long long sum = 0,even = 0;
    vector<int> oddVec;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<n;i++){
        if(v[i]%2 == 0)
            sum += v[i];
        else   
            oddVec.push_back(v[i]);
    }
    // for(int val : oddVec)
    //     cout<<val<<" ";
    // cout<<endl;
    if(oddVec.size() %2 == 0){
        for(int val : oddVec)
            sum += val;
    }
    else{
        oddVec.pop_back();
        // cout<<"pop_back value "<<endl;
        for(int val : oddVec)
            sum += val;
    }
    cout<<sum<<endl;
    return 0;
}