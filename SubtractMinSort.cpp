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
     vector<int>v(n);

     for( int i = 0; i < n; i++) cin>>v[i];

     for ( int i = 0; i < n-1; i++ ) {
        int mn = min(v[i],v[i+1]);
        v[i] -= mn;
        v[i+1] -= mn;
     }
     bool flag = is_sorted(v.begin(),v.end());

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
