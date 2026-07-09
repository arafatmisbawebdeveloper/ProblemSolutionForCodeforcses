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
     vector<ll>res(2*n + 1);

     ll tmp = n;
     for ( ll i = 1; i <= n; i++ ) {
        res[i] = tmp;
        tmp--;
     }
     res[n+1] = n;
     tmp = n - 1;
     for ( ll i = 2*n; i > n+1; i-- ) {
        res[i] = tmp;
        tmp--;
     }

     for ( ll i = 1; i <=  2*n; i++ ) cout<<res[i]<<" ";
     cout<<endl;
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
