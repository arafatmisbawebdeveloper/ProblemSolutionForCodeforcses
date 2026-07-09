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
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    if (n == 2) {
        cout << arr[1] << " " << arr[0] << "\n";
        return;
    }
    vector<ll> ans(n, 0);
    for (int i = 1; i < n - 1; i++) {
        ans[i] = ((arr[i + 1] - arr[i]) - (arr[i] - arr[i - 1])) / 2;
    }
    ans[0] = arr[n - 1];
    for (int i = 1; i < n; i++)
        ans[0] -= (n - 1 - i) * ans[i];
    ans[0] /= (n - 1);
    ans[n - 1] = arr[0];
    for (int i = 0; i < n - 1; i++)
        ans[n - 1] -= i * ans[i];
    ans[n - 1] /= (n - 1);
    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i + 1 == n];
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
