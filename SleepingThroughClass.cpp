#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
      int n, k;
        string s;
        cin >> n >> k;
        cin >> s;

        vector<bool> awake(n, false);

        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                int r = min(n - 1, i + k);
                for (int j = i; j <= r; ++j) awake[j] = true;
            }
        }

        int sleepCount = 0;
        for (int i = 0; i < n; ++i) if (!awake[i]) ++sleepCount;

        cout << sleepCount << '\n';

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
