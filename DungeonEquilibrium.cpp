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
     map<int,int>cnt;
     for( int i = 0; i < n; i++ ) {
        int x;
        cin>>x;
        cnt[x]++;
     }
     int ans = 0;
     for ( auto it:cnt ) {
        if(it.first != it.second) {
            if( it.first > it.second ) ans += it.second;
            else ans += abs(it.first - it.second);
        }
     }
     cout<<ans<<endl;
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
