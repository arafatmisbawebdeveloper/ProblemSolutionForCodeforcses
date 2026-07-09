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
     vector<ll>v(n);

     for(int i = 0; i < n; i++) cin>>v[i];

     ll ans = 0;

     if( v[0] > v[1]) {
        ans += v[0] - v[1];
        v[1] = v[0];
     }

     for ( int i = 1; i + 1 < n; i += 2 ) {
        if( v[i-1] + v[i+1] > v[i]) {
            ll diff = v[i-1] + v[i+1] - v[i];
            ans += diff;
            v[i+1] = max(0ll,v[i+1]-diff);
        }
     }
     if( n%2 == 0 ) {
        ans += max(0ll, v[n - 2] - v[n - 1]);
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
