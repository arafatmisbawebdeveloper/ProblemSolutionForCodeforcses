#pragma GCC optimize("Ofast")
#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    ll s, m;
    cin >> s >> m;
    ll lo = 1, hi = s, ans = -1;
    while (lo <= hi) {
        ll mid = lo + (hi - lo) / 2;
        ll sum = 0, S = s;
        for (int i = m; i; i ^= 1ll << __lg(i)) {
            ll bit = 1ll << __lg(i);
            ll eiBitUseKorboKoyta = min(mid, S / bit);
            S -= eiBitUseKorboKoyta * bit;
        }
        if (!S) {
            ans = mid, hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    cout << ans << '\n';

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
