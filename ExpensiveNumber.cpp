#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

int main()
{
    optimize();
    int tc,p;
    cin>>tc;
    while(tc--) {
        string s;
        cin>>s;
        for ( int i = 0; i < int(s.size()); i++ ) {
            if (s[i] != '0') p = i;
        }
        int ans = 0;
        for ( int i = 0; i < p; i++ ) {
            if ( s[i] != '0') ans++;
        }
        for( int i = p+1; i < int(s.size()); i++ ) {
            if ( s[i] == '0' ) ans++;
        }
        cout<<ans<<endl;
    }

}





