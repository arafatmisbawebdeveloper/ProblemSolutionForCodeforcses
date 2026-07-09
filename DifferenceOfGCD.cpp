#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     ll n,l,r;
     cin>>n>>l>>r;

     vector<ll>v;

     for( int i = 1; i <= n; i++ ) {
        if ( ((l-1)/i + 1) * i <= r ) {
            v.push_back( ((l-1)/i + 1) * i );
        }
        else {
            cout<<"NO"<<endl;
            return;
        }
     }

     cout<<"YES"<<endl;
     for ( ll it:v ) {
        cout<<it<<" ";
     }
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
