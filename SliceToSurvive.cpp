#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

ll calc(ll x)
{
    ll tmp = 0;
    while(x > 1) {
        x = (x+1)/2;
        tmp++;
    }
    return tmp;
}
void solve()
{
     ll n,m,a,b;
     cin>>n>>m>>a>>b;

     ll r = min(n-a+1,a);
     ll c = min(m-b+1,b);

     ll ans = min(calc(r)+calc(m),calc(n)+calc(c));

     cout << ans+1 <<endl;
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
