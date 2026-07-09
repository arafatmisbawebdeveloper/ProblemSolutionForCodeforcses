#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n),b(n);
    set<ll>s;
    ll cnt = 0,mx = 0, mn = 1e9+123;
    for ( ll i = 0; i < n; i++ ) {
        cin>>a[i];
        mn = min(mn,a[i]);
         mx = max(mx,a[i]);
    }
    for ( ll i = 0; i < n; i++ ) {
        cin>>b[i];

        if ( b[i] == -1) cnt++;
        else s.insert(a[i]+b[i]);
    }
    if ( s.size()>1) {
        cout<<0<<endl;
        return;
    }
    if ( cnt == n ) {
        cout<<mn+k-mx+1<<endl;
        return;
    }
    else{
        ll sm = *s.begin();
        for ( ll i = 0; i < n; i++ ) {
            if (a[i] > sm || a[i]+k < sm ) {
                cout<<0<<endl;
                return;
            }
        }
        cout<<1<<endl;
    }



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





