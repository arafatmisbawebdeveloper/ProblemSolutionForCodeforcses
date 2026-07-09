#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n; cin>>n;
    vector<pair<ll,int>>a(n);
    set<ll>avail;
    vector<ll>b;

    for( int i = 0; i < n; i++ ) {
        cin>>a[i].first;
        a[i].second = i;
        b.push_back(a[i].first);
        avail.insert(i);
    }
     sort(a.begin(),a.end());
     ll cost = 0;

     for( auto it : a ) {
            ll val = it.first;
            ll curIdx = it.second;

        if( avail.size() == 1 ) break;

        auto left = avail.lower_bound(curIdx);
        if( left == avail.begin()) left = avail.end();
        left--;

        auto right = avail.upper_bound(curIdx);
        if( right == avail.end()) right = avail.begin();

        ll L = *left, R = *right;
        cost += min(b[L],b[R]);
        avail.erase(curIdx);

     }
    cout<<cost<<endl;
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
