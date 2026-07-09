#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> cnt(101, 0);
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            cnt[x]++;
        }


        int ans = 0;
        for (int i = 0; i <= 100; ++i) {
            if (cnt[i] == 0) {
                ans = i;
                break;
            }
        }

        cout << ans << "\n";
    }
}

