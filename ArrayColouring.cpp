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
    map<int,int>mp;
    vector<int>v(n);

    for( int i = 0; i < n; i++ ) {
        cin>>v[i];
       if( i & 1 ) mp[v[i]] = 1;
       else mp[v[i]] = 0;
    }

    sort(v.begin(),v.end());

    for ( ll i = 1; i < n; i++ ) {
       if(mp[v[i-1]] == mp[v[i]]) {
        cout<<"NO"<<endl;
        return;
       }
    }
    cout<<"YES"<<endl;
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
