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
    vector<ll> arr(n + 1);
    ll allXor = 0;
    for (ll i = 1; i <= n; i++)
        allXor ^= i;
    arr[n] = 1;
    allXor ^= 1; //
    for (ll i = n - 1; i >= 2; i--) {
        arr[i] = i ^ 1;
        allXor ^= arr[i]; //
    }
    arr[1] = allXor;
    for (ll i = 1; i <= n; i++) {
        cout << arr[i] << " \n"[i == n];
    }
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
