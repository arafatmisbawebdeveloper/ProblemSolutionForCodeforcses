#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     ll x,y;
     cin>>x>>y;
     ll diff = x - 2*y;
        if (diff < 0 || diff % 3 != 0) {
            cout << "NO\n";
            return;
        }

        ll k = diff / 3;

        ll low = max(0LL, -y);
        ll high = k / 2;

        if (low <= high)
            cout << "YES\n";
        else
            cout << "NO\n";
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
