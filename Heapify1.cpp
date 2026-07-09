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

        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b.begin() + 1, b.end());

        vector<bool> visited(n + 1, false);

        for (int i = 1; i <= n; i++) {
            if (visited[i]) continue;

            vector<int> cur, need;
            int x = i;

            while (x <= n) {
                visited[x] = true;
                cur.push_back(a[x]);
                need.push_back(b[x]);
                x *= 2;
            }

            sort(cur.begin(), cur.end());
            sort(need.begin(), need.end());

            if (cur != need) {
                cout << "NO\n";
                goto next_case;
            }
        }

        cout << "YES\n";
        next_case:;
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
