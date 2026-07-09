#include<bits/stdc++.h> //
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

    vector<ll> a(n);
    set<ll> s;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < k) s.insert(a[i]);
    }

    ll mex = 0;
    for (ll i = 0; i <= k - 2; i++) {
        if (s.count(i))
            mex++;
        else
            break;
    }
    cout << mex << endl;
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
