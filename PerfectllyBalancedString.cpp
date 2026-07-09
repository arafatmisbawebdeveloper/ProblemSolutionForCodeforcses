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

     set<char>st;
     for ( auto u:s ) {
        st.insert(u);
     }
     int n = s.size();
     int k = st.size();
     bool flag = true;

     for ( int i = 0; i < n; i++ ) {
        if( i+k < n) {
            if ( s[i] != s[i+k]) {
                flag = false;
                break;
            }
        }
     }
     if( flag ) cout<<"YES"<<endl;
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
