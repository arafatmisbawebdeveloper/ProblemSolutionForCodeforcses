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

        int mx = *max_element(a.begin(), a.end());
        int count = 0;

        for (int x : a) {
            if (x == mx) count++;
        }

        cout << count << endl;
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
