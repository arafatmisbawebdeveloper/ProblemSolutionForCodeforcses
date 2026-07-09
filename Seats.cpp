#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int existing = 0;
    for (char c : s) if (c == '1') existing++;

    int added = 0;
    int i = 0;

    while (i < n) {
        if (s[i] == '1') {
            i++;
            continue;
        }

        int j = i;
        while (j < n && s[j] == '0') j++;
        int L = j - i;

        bool left = (i > 0 && s[i - 1] == '1');
        bool right = (j < n && s[j] == '1');

        if (left && right) {
            if (L > 1) added += (L - 2 + 2) / 3;
        } else if (left || right) {
            if (L > 0) added += (L - 1 + 2) / 3;
        } else {
            added += (L + 2) / 3;
        }

        i = j;
    }

    cout << existing + added << endl;
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
