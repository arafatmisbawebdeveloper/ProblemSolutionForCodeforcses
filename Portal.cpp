#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    deque<ll> l, r;
    for (int i = 0; i < x; i++)
        l.push_back(arr[i]);
    for (int j = y; j < n; j++)
        r.push_back(arr[j]);

    ll len = y - x;
    vector<ll> tmp;
    ll mnIndx;
    if (len) {
        vector<ll> tmp2;
        for (int i = x; i < y; i++)
            tmp2.push_back(arr[i]);
        mnIndx = min_element(tmp2.begin(), tmp2.end()) - tmp2.begin();
        for (int j = 0; j < len; j++) {
            tmp.push_back(tmp2[(mnIndx + j) % len]);
        }

        ll firstLLarge = -1;
        for (int i = 0; i < x; i++) {
            if (firstLLarge == -1 && arr[i] > tmp[0])
                firstLLarge = i;
        }
        bool l2r = false;
        while (firstLLarge != -1 && !l.empty()) {
            r.push_front(l.back()), l.pop_back();
            l2r = true;
            if (r.front() == arr[firstLLarge])
                break;
        }

        if (!l2r) {
            while (!r.empty() && !tmp.empty())
                if (r.front() < tmp.front())
                    l.push_back(r.front()), r.pop_front();
                else
                    break;
        }
    }

    for (auto& it : l)
        cout << it << ' ';
    for (auto& it : tmp)
        cout << it << ' ';
    for (auto& it : r)
        cout << it << ' ';
    cout << '\n';
}

int32_t main()
{
    optimize();
    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }
}
