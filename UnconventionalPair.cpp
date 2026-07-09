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

    sort(v.begin(),v.end());
    ll ans = LLONG_MIN;
    for ( int i = 1; i < n; i+=2 ) {
        ans = max(ans,abs(v[i]-v[i-1]));
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





