#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve()
{

   ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    set<ll> st, ans, fullA;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        st.insert(arr[i]);
    }
    fullA = st;
    while (!st.empty()) {
        ll get = *st.begin();
        for (int i = 1; i * get <= k; i++) {
            if (!fullA.count(i * get)) {
                cout << "-1\n";
                return;
            }
            st.erase(i * get);
        }
        ans.insert(get);
    }
    cout << ans.size() << "\n";
    for (auto& it : ans)
        cout << it << " ";
    cout << "\n";
}

int32_t main() {
    optimize();
    int tc;
    cin >> tc;
    while(tc--) solve();
}
