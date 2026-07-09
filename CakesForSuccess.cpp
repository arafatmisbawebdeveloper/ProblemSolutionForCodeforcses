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
     ll n;
     cin >> n;

     ll k = 1;
     for (ll p = 2; p * p <= n; p++) {
            if (n % p == 0) {
                k *= p;
                while (n % p == 0)
                    n /= p;
            }
        }
        if (n > 1) k *= n;

        cout << k << endl;
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
