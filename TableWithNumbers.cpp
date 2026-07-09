#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     int n, h, l;
    cin >> n >> h >> l;

    vector<int> a(n);
    int C = 0, A = 0, B = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= min(h, l)) {
            C++;
        } else if (a[i] <= h) {
            A++;
        } else if (a[i] <= l) {
            B++;
        }
    }

    int ans = min((A + B + C) / 2, min(A + C, C + B));
    cout<<ans<<endl;
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
