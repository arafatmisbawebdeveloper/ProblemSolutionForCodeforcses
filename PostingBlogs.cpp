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

        vector<vector<int>> blogs(n);

        for (int i = 0; i < n; i++) {
            int l;
            cin >> l;
            vector<int> a(l);
            for (int j = 0; j < l; j++) cin >> a[j];

            // keep only last occurrence
            unordered_set<int> seen;
            vector<int> uniq;
            for (int j = l - 1; j >= 0; j--) {
                if (!seen.count(a[j])) {
                    seen.insert(a[j]);
                    uniq.push_back(a[j]);
                }
            }
            blogs[i] = uniq; // already reversed
        }

        vector<bool> used_blog(n, false);
        unordered_set<int> used_user;
        vector<int> Q;

        for (int step = 0; step < n; step++) {
            int best = -1;
            vector<int> best_seq;

            for (int i = 0; i < n; i++) {
                if (used_blog[i]) continue;

                vector<int> cur;
                for (int u : blogs[i]) {
                    if (!used_user.count(u)) {
                        cur.push_back(u);
                    }
                }

                if (best == -1 || cur < best_seq) {
                    best = i;
                    best_seq = cur;
                }
            }

            for (int u : best_seq) {
                Q.push_back(u);
                used_user.insert(u);
            }
            used_blog[best] = true;
        }

        for (int x : Q) cout << x << " ";
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
