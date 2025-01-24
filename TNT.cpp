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

    for ( int i = 0; i < n; i++ ) cin>>v[i];

    ll ans = 0,p = 0;

    for ( int i = 1; i < n; i++ ) {
            if ( n % i != 0) continue;

                    ll mx = 0, mn = 1e18;
                 for ( int j = 0; j < n; j += i) {
                  for ( int k = j; k < j+i; k++ ) p += v[k];
                  mx = max(p,mx);
                  mn = min(p,mn);
                  p = 0;
            }

               ans = max(ans,mx-mn);

    }
    cout<<ans<<endl;
}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while ( tc-- ) {
        solve();
    }

}





