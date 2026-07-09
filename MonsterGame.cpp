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
	vector<ll> a(n);
	vector<ll> b(n);
	for (ll i = 0; i < n; i++)cin >> a[i];
	for (ll i = 0; i < n; i++)cin >> b[i];
	sort(a.begin(), a.end());

	ll sum = 0;
	ll ans = 0;
	for (ll i = 0; i < n; i++)
	{
		sum += b[i];
		if (sum > n)break;
		ans = max(ans, a[n - sum] * (i + 1));
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
