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

    ll min1 = 1e9,min2 = 1e9,sum1 = 0,sum2 = 0;

    for ( int i = 0; i < n; i++ ) {
        int a;
        cin>>a;
        sum1+=a;
        if ( a < min1 ) min1 = a;
    }

    for ( int i = 0; i < n; i++ ) {
        int b;
        cin>>b;
        sum2+=b;
        if ( b < min2 ) min2 = b;
    }

   ll ans = min(sum1 + (min2*n),sum2 + (min1*n));

   cout<<ans<<endl;

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





