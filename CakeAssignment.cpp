#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     ll k,x;
     cin>>k>>x;
     vector<ll>ans;

     if( (1ll << k) == x ) {
        cout<<0<<endl;
        cout<<endl;
        return;
     }
     ll l = x, r = (1ll << (k+1)) - x;

     while(l != r) {
        if( l > r ) {
            l -= r;
            r <<= 1ll;
            ans.push_back(2);
        }
        else {
            r -= l;
            l <<= 1ll;
            ans.push_back(1);
        }
     }
     reverse(ans.begin(),ans.end());

     cout<<ans.size()<<endl;
     for( auto it:ans ) cout<<it<<" ";
     cout<<endl;
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
