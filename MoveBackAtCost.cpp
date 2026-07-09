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
    multiset<pair<ll,ll>>ms;
    for ( ll i = 0; i < n; i++ ) {
        ll x;
        cin>>x;
        ms.insert({x,i});
    }
    ll cur = 0;
    while( !ms.empty()) {
        auto top = *ms.begin();
        ms.erase(ms.begin());
        ll val = top.first, ind = top.second;
        if ( ind == n || ind >= cur ) {
            cout<<val<<" ";
            cur = ind;
        }
        else {
            ms.insert({val+1,n});
        }
    }
    cout<<endl;
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





