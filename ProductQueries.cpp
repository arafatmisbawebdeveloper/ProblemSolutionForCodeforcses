#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;
vector<ll> divs[300005];

void solve()
{
     ll n;
     cin>>n;
     unordered_set<ll>st;

     for( ll i = 0; i < n; i++ ) {
        int x;
        cin>>x;
        st.insert( x );
     }

     vector<ll>dp(n+1,INT_MAX);
     dp[1] = 0;

     for( ll i = 2; i <= n; i++ ) {
        if(st.count(i)) {
            dp[i] = 1;
        }
        for( auto d : divs[i]) {
            dp[i] = min(dp[i],dp[d]+dp[i/d]);
        }
     }
     if(st.count(1)) dp[1] = 1;
     else dp[1] = INT_MAX;

     for( ll i = 1; i <= n; i++ ) {
        if(dp[i] >= INT_MAX) cout<<-1<<" ";
        else cout<<dp[i]<<" ";
     }
     cout<<endl;

}
int32_t main()
{
    optimize();
    for( ll i = 1; i <= 300000; i++ ) {
        for( ll j = i; j <= 300000; j += i ) {
            divs[j].push_back(i);
        }
    }
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }

}
