#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     ll n;
     cin >> n;

    vector<ll> a(n + 1), b(n + 1), c(n + 1), d(n + 1);
    for(ll i = 1; i <= n; i++ )
        cin >> a[i] >> b[i] >> c[i] >> d[i];

    ll cnt = 0;
    for(ll i = 1; i <= n; i++ ){
        if(b[i] > d[i]){
            cnt += b[i] - d[i] + a[i];
        }
        else if(a[i] > c[i]){
            cnt += a[i] - c[i];
        }
    }

    cout << cnt << endl;
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }

}
