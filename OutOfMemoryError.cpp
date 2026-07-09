#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n, m;
    ll h;
    cin >> n >> m >> h;

    vector<ll> orig(n);
    for (int i = 0; i < n; i++) cin >> orig[i];

    vector<ll> add(n, 0);
    vector<int> version(n, 0);
    int cur_version = 1;

    for (int i = 0; i < m; i++) {
        int b;
        ll c;
        cin >> b >> c;
        b--;


        if (version[b] != cur_version) {
            add[b] = 0;
            version[b] = cur_version;
        }

        add[b] += c;

        if (orig[b] + add[b] > h) {
            cur_version++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (version[i] != cur_version) add[i] = 0;
        cout << orig[i] + add[i] << " ";
    }
    cout<<endl;
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
