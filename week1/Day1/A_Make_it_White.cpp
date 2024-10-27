// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n; cin>>n;
//         string s;
//         cin >> s;
//         int i = 0, j = n - 1;
//         int ipos = 0, jpos = n - 1;
//         bool iflag = false, jflag = false;
//         while (i <= j)
//         {
//             if (iflag == false)
//             {
//                 if (s[i] == 'B')
//                 {
//                     iflag = true;
//                     ipos = i;
//                 }
//                 else 
//                     i++;
//             }
//             if (!jflag)
//             {
//                 if (s[j] == 'B')
//                 {
//                     jflag = true;
//                     jpos = j;
//                 }
//                 else
//                     j--;
//             }
//             if(iflag && jflag) break;
            
//         }
//         cout<<jpos-ipos+1<<endl;
//     }
//     return 0;
// }