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
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll ans;

        bool left_fixed = (a[0] != -1);
        bool right_fixed = (a[n-1] != -1);

        if (left_fixed && right_fixed) {
            ans = llabs(a[n-1] - a[0]);

            for (int i = 0; i < n; ++i) {
                    if (a[i] == -1) {
                          a[i] = 0;
                    }
            }
        }
        else if (!left_fixed && !right_fixed) {
            ans = 0;
            for (int i = 0; i < n; ++i) {
                 if (a[i] == -1) {
                     a[i] = 0;
                 }
            }

        }
        else if (!left_fixed && right_fixed) {

            ans = 0;
            ll v = a[n-1];
            for (int i = 0; i < n; ++i) {
                if (a[i] == -1) a[i] = 0;
            }
            a[0] = v;
        }
        else {
            ans = 0;
            ll = a[0];
            for (int i = 0; i < n; ++i) {
                if (a[i] == -1) a[i] = 0;
            }
            a[n-1] = v;
        }

        cout << ans << endl;
        for (int i = 0; i < n; ++i) {
            if (i) cout << ' ';
            cout << a[i];
        }
        cout << endl;
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
