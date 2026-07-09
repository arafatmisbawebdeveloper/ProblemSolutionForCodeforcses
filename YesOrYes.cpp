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
     int cntY = count(s.begin(),s.end(),'Y');
     if(cntY > 1) cout<<"NO"<<endl;
     else cout<<"YES"<<endl;

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
