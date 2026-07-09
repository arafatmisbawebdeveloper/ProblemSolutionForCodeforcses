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
    if (n == 1) {
        cout << "-1\n";
        return;
    }
    vector<ll> a = { 2, 1 };
    ll sum = 3;
    set<ll> s;
    for (int i = 3; i <= n; i++) {
        s.insert(i);
    }
    while (a.size() < n) {
        ll sq = sqrt(sum);
        sq++;
        sq *= sq;
        ll needOut = sq - sum + 1;
        ll needIn = sq - sum - 1;
        if (*s.begin() <= needIn) {
            a.push_back(*s.begin());
            s.erase(s.begin());
            sum += a.back();
            continue;
        }
        auto it = s.lower_bound(needOut);
        if (it == s.end()) {
            cout << "-1\n";
            return;
        }
        a.push_back(*it);
        s.erase(it);
        sum += a.back();
    }
    for (auto& it : a) {
        cout << it << ' ';
    }
    cout << endl;
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
