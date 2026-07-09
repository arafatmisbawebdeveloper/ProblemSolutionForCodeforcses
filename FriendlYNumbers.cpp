#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

ll d(ll y)
{
    ll sum = 0;
    while(y) {
        sum += y%10;
        y /= 10;
    }
    return sum;
}
void solve()
{
     ll x;
     cin>>x;
     ll ans = 0;
     for( ll y = x; y <= x+81; y++ ) {
        if(y-d(y) == x ) ans++;
     }
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
