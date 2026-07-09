#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    ll l, a, b;
    cin >> l >> a >> b;

    ll g = __gcd(b, l);


    ll ans = a + ((l - 1 - a) / g) * g;

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }
}
