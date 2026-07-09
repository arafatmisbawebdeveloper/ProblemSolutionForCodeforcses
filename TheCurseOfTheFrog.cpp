#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    ll n,x;
    cin>>n>>x;

    vector<ll> a(n), b(n), c(n);

    ll free = 0;
    ll mx = -1*1e9;
    for(ll i=0; i<n; i++){
        cin>>a[i]>>b[i]>>c[i];
        free += (a[i] * (b[i]-1));
        mx = max(mx, (a[i]*b[i]) - c[i]);
    }

    if(free >= x){
        cout<<0<<endl;
        return;
    }
    if(mx <= 0){
        cout<<-1<<endl;
        return;
    }
    ll rem = x - free;
    ll result = rem / mx;
    if(rem % mx) result++;
    cout<<result<<endl;

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
