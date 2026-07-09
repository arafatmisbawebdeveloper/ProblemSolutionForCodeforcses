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
    int ans = 1e8;

    vector<pair<int,int>>v(n);

    for ( int i = 0; i < n; i++ ) {
        cin>>v[i].first>>v[i].second;
        ans = min( ans, v[i].first + (v[i].second - 1 ) / 2 ) ;
    }

    cout<<ans<<endl;

}

int main()
{
    optimize();
    int n;
    cin>>n;

    while( n-- ) {
        solve();
    }

}





