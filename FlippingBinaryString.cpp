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
     string a;
     cin>>a;
     int zero = 0, one = 0;
     for( int i = 0; i < n; i++ ) {
        if(a[i] == '0') zero++;
     }
     one = n - zero;

     if( !(one & 1)) {
        cout<<one<<endl;
        for( int i = 0; i < n; i++ ) {
            if( a[i] == '1')
                cout<<i+1<<" ";
        }
        cout<<endl;
     }
     else if(zero & 1) {
        cout<<zero<<endl;
        for( int i = 0; i < n; i++ ) {
            if(a[i] == '0')
                cout<<i+1<<" ";
        }
        cout<<endl;
     }
     else
        cout<<-1<<endl;
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
