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
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<ll> suffix(n+1, 0);
        for (int i = n-1; i >= 0; --i) {
            suffix[i] = suffix[i+1] + a[i];
        }

        vector<ll> pref_max(n+1, -1e18);
        pref_max[0] = a[0];
        for (int i = 1; i < n; ++i) {
            pref_max[i] = max(pref_max[i-1], a[i]);
        }
        cout<<pref_max[n-1]<<" ";
        for (int k = 1; k < n; ++k) {

                cout<<suffix[n-k] + pref_max[n-k-1]<<" ";


        }
        cout << "\n";
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while( tc-- ) {
        solve();
    }

}





