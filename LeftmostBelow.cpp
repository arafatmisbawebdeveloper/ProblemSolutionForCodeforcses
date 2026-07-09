#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    ll mn = arr[0];
    for (ll i = 1; i < n; i++) {
        if (2 * mn - 1 < arr[i]) {
            cout << "NO\n";
            return;
        }
        mn = min(mn, arr[i]);
    }
    cout << "YES\n";
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
