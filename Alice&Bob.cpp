#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     int n,a;
     cin>>n>>a;
     vector<int>v(n);

     int l = 0, r = 0;

     for( int i = 0; i < n; i++ ) {
            cin>>v[i];
            if( v[i] < a ) l++;
            else if( v[i] > a ) r++;
     }

     if( l > r ) cout<<a-1<<endl;
     else cout<<a+1<<endl;
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
