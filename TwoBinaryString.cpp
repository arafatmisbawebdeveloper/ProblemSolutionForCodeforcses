#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    string a,b;
    cin>>a>>b;
    bool fl = false;
    for ( int i = 0; i < a.size(); i++ ) {
        if (a[i] == b[i] && a[i] == '0' && a[i + 1] == b[i + 1] && a[i + 1] == '1') {
                fl = true;
            }
    }
    if ( fl ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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





