#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
      ll n, q;
    cin >> n >> q;
    vector<ll> a(n), b(n);
    for (auto& it : a)
        cin >> it;
    for (auto& it : b)
        cin >> it;
    for (int i = n - 1; i >= 0; i--) {
        a[i] = max({ a[i], b[i], (i < n - 1 ? a[i + 1] : 0ll) });
    }
    for (int i = 1; i < n; i++) {
        a[i] += a[i - 1];
    }
    while (q--) {
        ll l, r;
        cin >> l >> r;
        l--, r--;
        cout << a[r] - (l ? a[l - 1] : 0) << " ";
    }
    cout << "\n";
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
