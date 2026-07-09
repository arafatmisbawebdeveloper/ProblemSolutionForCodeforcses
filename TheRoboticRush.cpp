#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    set<ll> robots;
    set<ll> spikes;

    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        robots.insert(x);
    }

    for (int i = 0; i < m; i++) {
        ll x; cin >> x;
        spikes.insert(x);
    }

    string gdCode;
    cin >> gdCode;

    vector<ll> alive;
    for (char dir : gdCode) {
        set<ll> newRobots;
        for (auto pos : robots) {
            if (dir == 'L') pos--;
            else pos++;
            if (!spikes.count(pos)) newRobots.insert(pos);
        }
        robots = move(newRobots);
        alive.push_back(robots.size());
    }

    for (int i = 0; i < k; i++) {
        cout << alive[i] << (i == k - 1 ? '\n' : ' ');
    }
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
