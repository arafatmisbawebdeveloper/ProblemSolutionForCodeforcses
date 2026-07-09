#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
typedef double dl;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> pos(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pos[--x] = i;
    }
    vector<bool> d(n);
    int prv = -1;
    bool ans = 1;
    for (int i = 0, j = 0; i < n; i++) {
        int x;
        cin >> x;
        --x;
        if (x == prv) continue;
        if (d[x]) {
            ans = 0;
        }
        prv = x;
        d[x] = 1;
        if (pos[x] < j) {
            ans = 0;
        }
        j = pos[x];
    }
    cout << (ans ? "YES" : "NO") << '\n';
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
