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
     vector<int>a(n);

     int ans = 0;
     vector<bool>vis(n,0);

     for( int i = 0; i < n; i++ ) cin>>a[i];

     for( int i = 0; i < n-1; i++ ) {
        for( int j = i+1; j < n; j++ ) {
            if( a[i] > a[j] && vis[j] != 1)
            {
                ans++;
                vis[j] = 1;
            }
        }
     }
     cout<<ans<<endl;
//     for( auto u:a ) cout<<u<<" ";
//     cout<<endl;
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
