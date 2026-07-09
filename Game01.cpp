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
     int one = count(s.begin(),s.end(),'1');
     int zero = count(s.begin(),s.end(),'0');
     if( one == s.size() OR zero == s.size() ) {
        cout<<"NET"<<endl;
        return;
     }

     bool flag = false;
     string st;

     for( char c : s ) {
        if (!st.empty() && st.back() != c) {
            st.pop_back();
            flag = !flag;
        }

        else
            st.push_back(c);
     }
     if( flag ) cout<<"DA"<<endl;
     else cout<<"NET"<<endl;



//     int zero = 0, one = 0;
//
//     for ( int i = 0; i < n; i++ ) {
//        if( s[i] == '0') zero++;
//        else one++;
//     }
//
//     int ans = min(one,zero);
//     if( ans % 2 == 0 ) cout<<"NET"<<endl;
//     else cout<<"DA"<<endl;



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
