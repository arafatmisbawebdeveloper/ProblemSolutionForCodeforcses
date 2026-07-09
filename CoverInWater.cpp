#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n,ans = 0;
    cin>>n;
    string s;
    cin>>s;

    int a = s.find("...");

    if ( a == -1 ) {
        for ( int i = 0; i < s.size(); i++ ) {
            if (s[i] == '.') ans=ans+1;
        }
        cout<<ans<<endl;
    }

    else cout<<2<<endl;
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





