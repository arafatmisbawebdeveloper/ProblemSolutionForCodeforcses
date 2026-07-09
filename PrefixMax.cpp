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
     int mx = 0;
     for( int i = 0; i < n; i++ ) {
        int a;
        cin>>a;
        mx = max(mx,a);
     }
     cout<<mx*n<<endl;
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
