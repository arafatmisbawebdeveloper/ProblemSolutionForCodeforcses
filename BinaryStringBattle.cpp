#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    int cnt1 = 0;
    for( int i = 0; i < n; i++ ) {
        if ( s[i] == '1') cnt1++;
    }
    if( cnt1 <= k ) {
        cout<<"Alice"<<endl;
        return;
    }

    int cnt0 = 0;
    bool flag = false;
    for ( int i = 0; i < n; i++ ) {
        if( s[i] == '0') cnt0++;
        else cnt0 = 0;

        if ( cnt0 >= k ) flag = true;
    }

    if( flag || (n/2) >= k ) cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
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





