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
     bool flag = false;
     for( int i = 0; i < n; i++ ) {
        int x;
        cin>>x;
        if( x == 67 ) flag = true;
     }
     if(flag) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
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
