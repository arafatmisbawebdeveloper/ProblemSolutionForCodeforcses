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
    int tc;
    cin>>tc;
    while ( tc-- ) {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        string p = "ABCDEFG";
        map<char,int>mp;
        for ( int i = 0; i < n; i++ ) {
            mp[s[i]]++;
        }
        int ans = 0;
        for ( int i = 0; i < p.size(); i++ ) {
            if ( mp[p[i]] < m ) ans += (m - mp[p[i]]);
        }
        cout<<ans<<endl;
    }

}





