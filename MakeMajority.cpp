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
    if ( s[0] == '1' && s[n-1] == '1') {
        cout<<"YES"<<endl;
        return;
    }
    if ( n == 1 && s[0] == '1') {
        cout<<"YES"<<endl;
        return;
    }
    int one = 0, zero = 0;
    for ( int i = 0; i < n; i++ ) {
        if ( s[i] == '1') one++;
        else {
            if ( s[i+1] != '0') zero++;
        }
    }
    if( zero >= one ) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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





