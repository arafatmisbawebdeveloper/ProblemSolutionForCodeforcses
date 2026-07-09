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
     string s;
     cin>>s;


     int ans = 0;
     for ( int i = n-2; i >= 0; i-- ) {
        if( s[i] != s[n-1]) ans++;
     }
     cout<<ans<<endl;
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
