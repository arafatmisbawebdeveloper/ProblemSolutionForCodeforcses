#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    ll x,k;
    cin>>x>>k;
    if( x == 1 ) {
        if ( k == 2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
    }
    if ( k > 1 ) {
        cout<<"NO"<<endl;
        return;
    }
    else {
        for ( ll i = 2; i <= sqrt(x); i++) {
            if ( x % i == 0 ) {
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
    }

}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while( tc-- ) {
        solve();
    }

}





