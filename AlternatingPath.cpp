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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n+1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> color(n+1, -1);
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        if (color[i] == -1) {
            queue<int> q;
            q.push(i);
            color[i] = 0;
            int cnt0 = 1, cnt1 = 0;
            bool bipartite = true;

            while (!q.empty()) {
                int u = q.front(); q.pop();
                for (int v : g[u]) {
                    if (color[v] == -1) {
                        color[v] = color[u] ^ 1;
                        if (color[v] == 0) cnt0++;
                        else cnt1++;
                        q.push(v);
                    } else if (color[v] == color[u]) {
                        bipartite = false;
                    }
                }
            }

            if (bipartite) {
                ans += max(cnt0, cnt1);
            }

        }
    }

    cout << ans << "\n";
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
