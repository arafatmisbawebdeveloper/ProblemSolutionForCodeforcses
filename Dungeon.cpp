#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     int n,m;
     cin>>n>>m;

     vector<ll>b(m),c(m);
     multiset<ll>pq;

     for( int i = 0; i < n; i++ ) {
        int x;
        cin>>x;
        pq.insert(x);
     }
     for( auto &x:b ) cin>>x;
     for( auto &x:c ) cin>>x;

     vector<pair<ll,ll>>vp;
     vector<ll>add;

     for ( int i = 0; i < m ; i++ ) {
        if(c[i]) vp.push_back({b[i],c[i]});
        else add.push_back(b[i]);
     }

    sort(vp.begin(),vp.end());
    sort(add.begin(),add.end());

    ll ans = 0;

     for(auto u : vp) {
            ll bi = u.first;
            ll ci = u.second;
         auto it = pq.lower_bound(bi);
        if(it != pq.end()){
            ans++;
            ll cur = *it;
            pq.erase(it);
            pq.insert(max(ci, cur));
        }
    }

     for( auto x : add ) {
        auto it = pq.lower_bound(x);
        if( it != pq.end()) {
            ans++;
            pq.erase(it);
        }
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
