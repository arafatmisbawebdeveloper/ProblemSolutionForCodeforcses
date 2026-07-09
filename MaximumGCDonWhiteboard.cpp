#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> freq(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    int maxGCD = 1;
    for (int d = 1; d <= n; d++) {
        int count = 0;
        for (int i = d; i <= n; i += d) {
            count += freq[i];
        }
        if (n - count <= k) {
            maxGCD = d;
        }
    }

    cout << maxGCD << endl;
}

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) solve();

}
