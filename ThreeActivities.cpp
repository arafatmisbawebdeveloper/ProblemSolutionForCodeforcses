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

    vector<pair<ll,ll>> a(n),b(n),c(n);

    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        a[i]={x,i};
    }
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        b[i]={x,i};
    }
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        c[i]={x,i};
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());

//    cout<<"Skiing array by day"<<endl;
//    for ( auto u:a ) cout<<u.first<<" "<<u.second<<endl;
//    cout<<"Movie watching by day"<<endl;
//    for ( auto u:b ) cout<<u.first<<" "<<u.second<<endl;
//    cout<<"BoardGame by day"<<endl;
//    for ( auto u:c ) cout<<u.first<<" "<<u.second<<endl;

    ll ans = 0;

     for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            for ( int k = 0; k < 3; k++ ) {
                if ( a[i].second != b[j].second && b[j].second != c[k].second && a[i].second != c[k].second ) {
                    ans = max(ans,(a[i].first + b[j].first + c[k].first));
                }
            }
        }
     }

     cout<<ans<<endl;

}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while ( tc-- ) {
        solve();
    }

}





