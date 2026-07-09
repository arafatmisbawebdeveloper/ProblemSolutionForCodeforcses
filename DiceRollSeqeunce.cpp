#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const ll INF = 1e18;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    ll ans = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] == 7 - arr[i - 1] || arr[i] == arr[i - 1])
            ans++, arr[i] = 99;
    }
    cout << ans << endl;
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
