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
     vector<ll>v(n);
     for( int i = 0; i < n; i++ ) cin>>v[i];

     ll x;
     cin>>x;
     sort(v.begin(),v.end());

     ll mn = v[0];
     ll mx = v[n-1];

     if( x >= mn && x <= mx ) cout<<"YES"<<endl;
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
