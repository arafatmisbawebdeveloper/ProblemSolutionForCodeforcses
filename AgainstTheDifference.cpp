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
     vector<int>a(n+1),dp(n+1,0);
     queue<int>idx[n+1];

     for( int i = 1; i <= n; i++ ) cin>>a[i];

     for( int i = 1; i <= n; i++ ) {
        dp[i] = dp[i-1];
        idx[a[i]].push(i);
        if( idx[a[i]].size() > a[i]) idx[a[i]].pop();
        if( idx[a[i]].size() == a[i]) dp[i] = max(dp[i],dp[idx[a[i]].front() - 1] + a[i]);
     }
     cout<<dp[n]<<endl;
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
