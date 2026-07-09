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
    if ( n == 2 ) {
        if( s[0] == 'A') {
            cout<<"Alice"<<endl;
            return;
        }
        else {
            cout<<"Bob"<<endl;
            return;
        }
    }
    int cntB = 0;
    for( int i = 0; i < n; i++ ) {
        if ( s[i] == 'B') cntB++;
    }
    if( s[0] == 'A' && s[n-1] == 'A') cout<<"Alice"<<endl;
    else if ( s[n-1] == 'A' && s[n-2] == 'A') cout<<"Alice"<<endl;
    else if ( s[n-1] == 'B' && cntB < 2 ) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--)
        solve();

}





