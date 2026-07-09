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

    vector<int> p(n + 1, -1);
    vector<bool> used(n + 1, false);

    p[n] = n;
    used[n] = true;

    for (int i = n - 1; i >= 1; i--) {
        int a = p[i + 1] - i;
        int b = p[i + 1] + i;

        if (a >= 1 && a <= n && !used[a]) {
            p[i] = a;
            used[a] = true;
        } else {
            p[i] = b;
            used[b] = true;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << p[i] << " ";
    }
    cout << "\n";
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
