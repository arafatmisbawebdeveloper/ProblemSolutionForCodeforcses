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
    for(int i = 0; i < n; i++) cin >> a[i];


    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    int ans = 1;
    int cur = 1;

    for(int i = 1; i < (int)a.size(); i++) {
        if(a[i] == a[i-1] + 1) {
            cur++;
        } else {
            cur = 1;
        }
        ans = max(ans, cur);
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
