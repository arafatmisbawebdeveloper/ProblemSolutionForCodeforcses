#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n+1,0);
    for(ll i=0; i<n-1; i++){
        ll x,y;
        cin>>x>>y;
        v[x]++;
        v[y]++;
    }
    ll cnt=0;
    for(ll i=1; i<=n; i++){
        if(v[i]==1) cnt++;
    }
    ll ans=(cnt+1)/2;
    cout<<ans<<endl;
}

signed main(){

    optimize();

    ll tc;
    cin>>tc;
    while ( tc-- ) {
        solve();
    }
}
