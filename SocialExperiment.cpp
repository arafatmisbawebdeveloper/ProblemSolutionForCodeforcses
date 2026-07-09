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

     if( n <= 3 ) {
        cout<<n<<endl;
        return;
     }

     if( n % 2 == 0 ) {
        cout<<0<<endl;
     }
     else cout<<1<<endl;

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
