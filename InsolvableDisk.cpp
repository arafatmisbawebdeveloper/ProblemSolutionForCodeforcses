#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<ll> x(n);
    for(int i = 0; i < n; i++) cin >> x[i];

    if(n == 1) {
        cout << 0 << "\n";
        return;
    }

    vector<int> dp(n,0);
    dp[0] = 0; // only 1 disk, no pair
    dp[1] = 1; // first pair (x0,x1)

    for(int i = 2; i < n; i++) {
        dp[i] = max(dp[i-1], dp[i-2]+1);
    }

    cout << dp[n-1] << "\n";
}

int main() {
    optimize();
    int t;
    cin >> t;
    while(t--) solve();
}
