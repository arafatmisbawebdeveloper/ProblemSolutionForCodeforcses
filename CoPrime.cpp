#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> last(1001, -1);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        last[x] = i; // store last index
    }

    int ans = -1;
    for (int i = 1; i <= 1000; i++) {
        if (last[i] == -1) continue;
        for (int j = 1; j <= 1000; j++) {
            if (last[j] == -1) continue;
            if (__gcd(i, j) == 1) {
                ans = max(ans, last[i] + last[j]);
            }
        }
    }

    cout << ans << endl;
}

int main() {
    optimize();
    int tc;
    cin >> tc;
    while (tc--) solve();
}
