#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
   while(t--){
      string s; cin>>s;
      int n=s.size();

      vector<int> capital,small;
      vector<bool> check(n+2,true);

      for(int i=0;i<n;i++){
         if(s[i]=='b'){
            if(!small.empty()){
               check[small.back()]=false;
               small.pop_back();
            }
            check[i]=false;
         }
         else if(s[i]=='B'){
            if(!capital.empty()){
               check[capital.back()]=false;
               capital.pop_back();
            }
            check[i]=false;
         }
         else if(s[i]>='A' and s[i]<='Z'){
            capital.push_back(i);
         }
         else{
            small.push_back(i);
         }

      }

      for(int i=0;i<n;i++){
         if(check[i]){
            cout<<s[i];
         }
      }
      cout<<endl;

      
   }
    return 0;
}