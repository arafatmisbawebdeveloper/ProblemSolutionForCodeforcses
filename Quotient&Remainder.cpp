#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll l = 0, r = n - 1, ans = 0;
    while (l < n && r >= 0) {
        ll rem = b[r];
        ll q = a[l];

        ll y = rem + 1;
        ll x = q * y + rem;
        if (x > k) {
            r--;
            continue;
        }
        else {
            ans++;
            l++, r--;
        }
    }
    cout << ans << endl;
}

int main()
{
    optimize();
    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }
}
