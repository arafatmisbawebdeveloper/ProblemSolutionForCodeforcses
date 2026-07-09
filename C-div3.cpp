#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        ll first_mn = a[0];
        ll snd_mn = a[1];

        ll ans = max(first_mn,snd_mn-first_mn);
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
