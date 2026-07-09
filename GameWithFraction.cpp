#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     ll p,q;
     cin>>p>>q;
     if( max(p,q) <= 2 || p >= q ) {
        cout<<"Alice"<<endl;
        return;
     }
     if( p*3 >= q*2 ) {
        cout<<"Bob"<<endl;
     }
     else {
        cout<<"Alice"<<endl;
     }
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
