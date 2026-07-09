#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
       string x;
        cin >> x;

        int n = x.size();
        vector<int> digits(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            digits[i] = x[i] - '0';
            sum += digits[i];
        }

        if (sum <= 9) {
            cout << 0 << '\n';
            return;
        }


        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({digits[i], i});
        }


        sort(v.rbegin(), v.rend());

        int moves = 0;
        for (auto u : v) {
                ll d = u.first;
                ll idx = u.second;
            if (sum <= 9) break;

            int reduce;

            if (idx == 0) {
                reduce = d - 1;
            } else {
                reduce = d;
            }

            if (reduce > 0) {
                sum -= reduce;
                moves++;
            }
        }

        cout << moves << '\n';
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
