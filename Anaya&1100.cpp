#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


void solve()
{
    string s;
    cin>>s;
    int cnt = 0,n = s.size();
    for ( int i = 0; i < s.size()-3; i++ ) {
        string sub = s.substr(i,4);
        if( sub == "1100" ) {
            cnt++;
            i += 3;
        }
    }

    int q; cin>>q;

    while ( q-- ) {
        int idx;char c;
        cin>>idx>>c;
        idx--;
        for ( int i = max(0,idx-3); i <= min(idx,n-4); i++ ) {
            string sub = s.substr(i,4);
             if( sub == "1100" ) {
                cnt--;
                i += 3;
            }
        }

        s[idx] = c;

        for ( int i = max(0,idx-3); i <= min(idx,n-4); i++ ) {
            string sub = s.substr(i,4);
             if( sub == "1100" ) {
                cnt++;
                i += 3;
            }
        }
        if ( cnt ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }

int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) solve();

}





