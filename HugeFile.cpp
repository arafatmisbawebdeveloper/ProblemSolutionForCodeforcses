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

     if( n == k) {
        cout<<0<<endl;
        return;
     }

     ll l = k, r = k, ans = 0;

     while(r<n) {
        ans++;
        l = 2 * l - 1, r = 2 * r + 1;
       if (l <= n && n <= r) {
            cout << ans << endl;
            return;
        }

     }
     cout<<-1<<endl;
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
