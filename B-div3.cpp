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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }


        ll total = 0;
        for (int i = 0; i + 1 < n; i++) {
            total += abs(a[i] - a[i + 1]);
        }

        ll best_reduction = 0;

        best_reduction = max(best_reduction, (ll)abs(a[0] - a[1]));


        best_reduction = max(best_reduction, (ll)abs(a[n - 2] - a[n - 1]));


        for (int i = 1; i + 1 < n; i++) {
            ll before = abs(a[i - 1] - a[i]) + abs(a[i] - a[i + 1]);
            ll after = abs(a[i - 1] - a[i + 1]);
            best_reduction = max(best_reduction, before - after);
        }

        cout << total - best_reduction << endl;
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
