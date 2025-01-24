#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;

    for ( int i = 0; i < s.size(); i++ ) {
        mp[s[i]]++;
    }
    int ans = 0;

    sort(s.begin(),s.end());
    int sz = unique(s.begin(),s.end()) - s.begin();

    for ( int i = 0; i < sz;i++ ) {
        if ( mp[s[i]] >= (s[i] - 'A') + 1) ans++;
    }
    cout<<ans<<endl;
}

int main()
{
    optimize();
    int tc;
    cin>>tc;
    while( tc-- ) {
        solve();
    }
}





