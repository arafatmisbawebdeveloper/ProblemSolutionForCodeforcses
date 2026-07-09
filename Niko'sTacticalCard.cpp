#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;
const ll NEG_INF = (ll)-9e18;

void solve()
{
        int n;
        cin >> n;

        vector<ll> a(n+1), b(n+1);
        for (int i = 1; i <= n; ++i) cin >> a[i];
        for (int i = 1; i <= n; ++i) cin >> b[i];


        ll Pnext = 0;
        ll Qnext = NEG_INF;


        for (int i = n; i >= 1; --i) {
            ll Pi = max(Pnext - a[i], Qnext - b[i]);
            ll Qi = max(Qnext + a[i], b[i] + Pnext);
            Pnext = Pi;
            Qnext = Qi;
        }

        ll ans = max(Pnext, Qnext);
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
