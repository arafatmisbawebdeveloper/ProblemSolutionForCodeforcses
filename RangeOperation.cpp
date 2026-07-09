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
    vector<ll> arr(n + 1), improveMent(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        improveMent[i] = 2 * i - arr[i];
    }
    ll mxSum = 0;
    for (ll i = 1, sum = 0; i <= n; ++i) {
        sum += improveMent[i];
        if (sum < 0)
            sum = 0;
        mxSum = max(mxSum, sum);
    }
    cout << accumulate(arr.begin() + 1, arr.end(), 0LL) + mxSum << '\n';

}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }

}
