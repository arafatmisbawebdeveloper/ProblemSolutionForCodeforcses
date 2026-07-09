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
     int n;
     cin>>n;
     vector<int>v(n);

     int mx = -1;
     int idx = -1;


     for( int i = 0; i < n; i++ ) {
        cin>>v[i];
       if( mx < v[i]) {
        mx = v[i];
        idx = i;
       }
     }
     swap(v[0],v[idx]);
     for( int i = 0; i < n; i++ )
        cout<<v[i]<<" ";
     cout<<endl;
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
