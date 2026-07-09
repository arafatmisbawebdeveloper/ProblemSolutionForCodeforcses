#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
typedef double dl;
typedef long long ll;

void solve()
{
     ll n,x,y;
     cin>>n>>x>>y;

     vector<ll>a(n);

     for(ll i = 0; i < n; i++ ) {
        cin>>a[i];
     }

     ll mx = 0, sum = 0;

     for( ll i = 0; i < n; i++ ) {
        mx = max(mx, a[i] - a[i]/x * y),sum += a[i]/x * y;
     }
     cout<<mx+sum<<endl;
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
