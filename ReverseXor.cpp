#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


bool isPal(string s)
{
    ll sz = s.size();
    for( ll i = 0; i < sz/2; i++ ) {
        if( s[i] != s[sz-i-1]) return false;
    }
    return true;
}

void solve()
{
     ll n;
     cin>>n;
     if( __builtin_popcountll(n) % 2 ) {
        cout<<"NO"<<endl;
        return;
     }

     string s;
     for ( ll i = 30; i >= 0; i-- ) {
        if( n & (1ll << i))
            s += '1';
        else
            s += '0';
     }

     reverse(s.begin(),s.end());
     while(!s.empty() && s.back() == '0') s.pop_back();

     reverse(s.begin(),s.end());
     while( (ll)s.size() < 64 ) {
        if( isPal(s)) {
            cout<<"YES"<<endl;
            return;
        }
        else s.insert(s.begin(),'0');
     }

     cout<<"NO"<<endl;
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
