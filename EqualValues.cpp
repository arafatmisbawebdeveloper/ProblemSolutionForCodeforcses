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
     vector<int>a(n+1);

     for ( int i = 1; i <= n; i++ ) cin>>a[i];

     int i = 1;
     ll ans = 1e18;
     while(i <= n)
     {
         int j = i;
         while( j<=n && a[j] == a[i]) j += 1;
         ans = min(ans,1ll*(n-j+i) * a[i]);
         i = j;
     }
     cout<<ans<<endl;
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
