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
    ll mx = INT_MIN,mn = INT_MAX,sm = 0,odd = 0;
    for ( int i = 0;  i < n; i++ ) {
        cin>>v[i];
        if( v[i] % 2 ) odd++;
        sm += v[i];
        mx = max(mx,v[i]);
        mn = min(mn,v[i]);

    }
    if ( odd == 0 || odd == n ) cout<<mx<<endl;
    else cout<<sm-odd+1<<endl;
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





