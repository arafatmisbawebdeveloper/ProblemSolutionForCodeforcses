#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
typedef double dl;
typedef long long ll;

void solve()
{
     string s;
     cin>>s;
     int cnt2 = 0, cnt13 = 0;
     for( int i = 0; i < s.size(); i++) {
        if( s[i] == '2') cnt2++;
        else if( s[i] == '1' OR s[i] == '3') {
            cnt13 = max(cnt2+1,cnt13 + 1);
        }
     }
     int rmv = max(cnt2,cnt13);
     cout<<s.size()-rmv<<endl;
}
int32_t main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }

}
