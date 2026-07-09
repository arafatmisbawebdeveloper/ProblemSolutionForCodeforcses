#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    ll a,b,n;
    cin>>a>>b>>n;

    ll ans = b ,cnt = 0;

    for ( int i = 0; i < n; i++ ) {
        ll x;
        cin>>x;

        if ( x < a ) ans += x;
        else {
            ans = ans + (a - 1);
        }
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





