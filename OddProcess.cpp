#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     ll n;
    cin>>n;
    vector<ll> a(n);

    ll ev = 0, od = 0;
    vector<ll> odds, evens;

    for(ll i = 0; i < n; i++){
        cin>>a[i];
        if(a[i] % 2){
            od++;
            odds.push_back(a[i]);
        }
        else{
            ev++;
            evens.push_back(a[i]);
        }
    }

    if(odds.size() == 0){
        for(ll i = 1; i <= n; i++){
            cout<<0<<" ";
        }
        cout<<endl;
        return;
    }
    sort(odds.rbegin(), odds.rend());
    if(evens.size() == 0){
        for(int i=1; i<=n; i++){
            if(i%2) cout<<odds[0]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
        return;
    }

    sort(evens.rbegin(), evens.rend());

    ll m = evens.size();
    vector<ll> cev(m);

    cev[0] = evens[0];
    for(ll i = 1; i<m; i++){
        cev[i] = cev[i-1] + evens[i];
    }
    for(ll i = 0; i < n; i++){
        ll tmp = odds[0];
        ll nd = i;
        ll idx = min(m, nd);
        nd -= idx;

        if(idx) tmp += cev[idx-1];
        if(nd % 2){
            tmp -= evens[idx - 1];
            nd++;
        }
        if(nd == odds.size()) tmp = 0;

        cout<<tmp<<" ";
    }
    cout<<endl;
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
