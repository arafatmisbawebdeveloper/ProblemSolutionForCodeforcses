#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    vector<string> s(8);
    for (int i = 0; i < 8; i++) {
        cin >> s[i];
    }

    // check full rows of R
    for (int i = 0; i < 8; i++) {
        bool fullR = true;
        for (int j = 0; j < 8; j++) {
            if (s[i][j] != 'R') {
                fullR = false;
                break;
            }
        }
        if (fullR) {
            cout << "R\n";
            return;
        }
    }

    // else, must have a full column of B -> answer B
    cout << "B\n";
}

int main() {
    optimize();
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
