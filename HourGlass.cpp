#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     ll s,m,k;
     cin>>s>>k>>m;
     if( s <= k) {
        cout<<max(0ll,s - m%k)<<endl;
     }
     else{
        ll flip = m/k;
        if( flip & 1) {
            cout<<k - m%k <<endl;
        }
        else {
            cout<<s - m%k <<endl;
        }
     }
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
