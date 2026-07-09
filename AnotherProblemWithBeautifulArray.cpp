#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
typedef double dl;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++ )
        cin >> a[i];
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + a[i]; j < n && j <= i + a[i] * a[i] - 1; j += a[i])
            if (abs(j - i) == a[j] * a[i])
                ans++;
        for (int j = i - a[i]; j >= 0 && j >= i - a[i] * a[i]; j -= a[i])
            if (abs(j - i) == a[j] * a[i])
                ans++;
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
