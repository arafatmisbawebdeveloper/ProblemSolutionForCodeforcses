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
     vector<int>a(n),c(n);

     for ( int i = 0; i < n; i++ ) cin>>a[i];
     int total = 0;
     for ( int i = 0; i < n; i++ ) {
        cin>>c[i];
        total += c[i];
     }

     vector<int>dp(n,0);
     int mx = 0;

     for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < i; j++ ) {
            if( a[j] <= a[i]) {
                dp[i] = max(dp[i],dp[j]+c[i]);
            }
        }
        mx = max(mx,dp[i]);
     }

     cout<<total-mx<<endl;
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
