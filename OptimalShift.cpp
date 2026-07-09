#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     int n;
     cin>>n;
     string s;
     cin>>s;
     s += s;
     int cnt = 0,ans = 0;

     for( int i = 0; i < 2*n; i++ ) {
        if( s[i] == '0') cnt++;
        else{
            ans = max(cnt,ans);
            cnt = 0;
        }
     }
     ans = max(cnt,ans);
     cout<<ans<<endl;
}
int32_t main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }

}
