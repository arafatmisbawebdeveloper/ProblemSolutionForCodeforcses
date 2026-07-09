#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     string s;
     cin>>s;

     ll n = s.size();
     ll cnt = 0;

     if(s[0] == 'u') {
        s[0] = 's';
        cnt++;
     }
     if( s[n-1] == 'u') {
        s[n-1] = 's';
        cnt++;
     }

     for( ll i = 1; i < n-1; i++ ) {
        if( s[i] == 'u' && s[i-1] != 's') {
            s[i] = 's';
            cnt++;
        }
     }

     cout<<cnt<<endl;
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
