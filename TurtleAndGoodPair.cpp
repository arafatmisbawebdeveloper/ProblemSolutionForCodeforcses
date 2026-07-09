//#include<bits/stdc++.h> //
//using namespace std;
//
//#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define endl '\n'
//#define OR ||
//#define yes cout<<"YES\n"
//#define no cout<<"NO\n"
//typedef double dl;
//typedef long long ll;
//
//void solve()
//{
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     map<char,int>mp;
//      for(int i=0;i<n;i++){
//        mp[s[i]]++;
//      }
//
//      while(n--){
//        for(auto u:mp){
//           if(u.second>0){
//              cout<<u.first;
//              mp[u.first]--;
//             }
//         }
//      }
//      cout<<endl;
//}
//int32_t main()
//{
//    optimize();
//    int tc;
//    cin>>tc;
//    while(tc--) {
//        solve();
//    }
//
//}
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    sort(s.begin(), s.end());

    reverse(s.begin() + n/2, s.end());

    cout << s << endl;
}

int32_t main()
{
    optimize();
    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }
}
