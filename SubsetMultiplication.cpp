#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
void solve()
{
    ll n;
    cin>>n;
    vector<int>v(n+1);
    for( int i = 1; i <= n; i++ ) {
        cin>>v[i];
    }
    ll result = 1,g,x;
    for ( ll i = 2; i <= n; i++ ) {
        g = __gcd(v[i-1],v[i]);
        x = v[i-1]/g;
        result = lcm(result,x);
    }
    cout<<result<<endl;
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





