//#include<bits/stdc++.h> //
//using namespace std;
//
//#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define endl '\n'
//typedef long long ll;
//
//void solve()
//{
//    int n, k;
//   cin >> n >> k;
//   vector<int> a(k, n);
//   if(k % 2 == 0) {
//      int ptr = 0;
//      for(int i = 30; i >= 0; i--) {
//
//         if(n >> i & 1) {
//            if(ptr < k) a[ptr++] ^= 1 << i;
//            else a[0] ^= 1 << i;
//         }
//
//         else {
//            for(int j = 0; j + 1 < ptr; j += 2) {
//               a[j] ^= 1 << i;
//               a[j + 1] ^= 1 << i;
//            }
//         }
//
//      }
//   }
//   for(auto x : a) cout << x << ' ';
//   cout << endl;
//}
//
//int32_t main()
//{
//    optimize();
//    int tc;
//    cin >> tc;
//    while(tc--) {
//        solve();
//    }
//}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int N = 1 << n;
        vector<int> unused(N);
        iota(unused.begin(), unused.end(), 0);

        vector<int> ans;
        ans.reserve(N);

        int cur = N - 1; // all bits set

        while (!unused.empty()) {
            // If AND already zero, append rest lexicographically
            if (cur == 0) {
                sort(unused.begin(), unused.end());
                for (int x : unused) ans.push_back(x);
                break;
            }

            int best = -1;
            int best_pop = -1;
            int best_and = -1;

            // Find best candidate
            for (int x : unused) {
                int cand = cur & x;
                int pc = __builtin_popcount(cand);
                if (pc > best_pop || (pc == best_pop && x < best)) {
                    best_pop = pc;
                    best = x;
                    best_and = cand;
                }
            }

            ans.push_back(best);
            cur = best_and;
            unused.erase(find(unused.begin(), unused.end(), best));
        }

        for (int i = 0; i < N; i++) {
            cout << ans[i] << (i + 1 < N ? ' ' : '\n');
        }
    }
    return 0;
}
