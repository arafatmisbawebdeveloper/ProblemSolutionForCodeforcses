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
     cin>>n;
     vector<ll>v(n);

     for(int i=0;i<n;i++){
      cin>>v[i];
     }

    ll y = (2 * v[0] - v[1]) / (n + 1);
    ll x = v[1] - v[0] + y;

    if(y < 0 || x < 0) {
        cout << "NO" << endl;
        return;
    }

    for(int i = 0; i < n; i++) {
        v[i] -= x * (i + 1);
        v[i] -= y * (n - i);
    }

    for(int i = 0; i < n; i++) {
        if(v[i] != 0) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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
