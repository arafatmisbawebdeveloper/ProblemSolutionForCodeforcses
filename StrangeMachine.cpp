#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<ll> a(q);
    for (int i = 0; i < q; i++) cin >> a[i];

    bool hasB = false;
    for (char c : s) if (c == 'B') hasB = true;

    for (int i = 0; i < q; i++) {
        ll x = a[i];
        ll time = 0;
        int pos = 0;


        if (!hasB) {
            cout << x << endl;
            continue;
        }

        while (x > 0) {
            if (s[pos] == 'A') {
                bool allA = true;
                for (char c : s) if (c == 'B') allA = false;
                if (allA) {
                    time += x;
                    x = 0;
                    break;
                }

                x -= 1;
            } else {
                x /= 2;
            }
            time++;
            pos = (pos + 1) % n;
        }
        cout << time << endl;
    }
}

int main() {
    optimize();
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

}
