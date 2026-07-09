#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     ll r,x,d,n;
     cin>>r>>x>>d>>n;
     string s;
     cin>>s;

     ll diff = x - r;
     ll ans = 0;

     for( ll i = 0; i < n; i++ ) {
        if( s[i] == '1') {
            ans++;
            r > 0 ? r -= d : r = r;
        }
        else{
            if( r < x ) {
                ans++;
            }
        }
     }
     cout<<ans<<endl;
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }

}
