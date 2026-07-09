#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
typedef double dl;
typedef long long ll;

void solve()
{
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool non_decreasing = true;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                non_decreasing = false;
                break;
            }
        }

        if (non_decreasing)
            cout << n << endl;
        else
            cout << 1 << endl;
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
