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
    string ans = "";
    ans += s[0];
    ans += s[1];
    for ( int i = 1; i < n-1; i++ ) {
        if ( s[i+2] == 'a' OR s[i+2] == 'e' ) {
            ans += '.';
            ans += s[i+1];
        }
        else ans += s[i+1];
    }
    cout<<ans<<endl;
}
int main()
{
    optimize();
    int tc;
    cin>>tc;

    while ( tc-- ) {
        solve();
    }

}





