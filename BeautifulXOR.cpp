#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long ll;

void solve(){
    ll a, b;
    cin >> a >> b;

    if (a == b) {
        cout << 0 << endl;
        return;
    }

    // If msb(b) > msb(a), impossible
    if ( (int)floor(log2(b)) > (int)floor(log2(a)) ) {
        cout << -1 << endl;
        return;
    }

    ll x = a ^ b;
    if (x <= a) {
        // One operation works
        cout << 1 << endl;
        cout << x << endl;
        return;
    }

    // Otherwise we need two operations
    // We'll search for an x1 such that x1 <= a and then x2 = (a ^ x1) ^ b <= (a ^ x1)
    for (int i = 0; i < 31; i++) {
        ll mask = ((1LL << i) - 1);
        ll x1 = mask ^ a;
        if (x1 <= a) {
            ll a1 = a ^ x1;
            ll x2 = a1 ^ b;
            if (x2 <= a1) {
                cout << 2 << endl;
                cout << x1 << " " << x2 << endl;
                return;
            }
        }
    }

    // In theory this should never fail according to the proof
    cout << -1 << endl;
}

int main(){
    optimize();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
