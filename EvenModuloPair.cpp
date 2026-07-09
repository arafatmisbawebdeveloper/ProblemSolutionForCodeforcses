#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     int n; cin>>n;
     vector<ll>v(n);
     for( int i = 0; i < n; i++ ) {
        cin>>v[i];
     }
     for( int i = 0; i < n; i++ ) {
        for( int j = i+1; j < n; j++ ) {
            if( (v[j] % v[i]) % 2 == 0 ) {
                cout<<v[i]<<" "<<v[j]<<endl;
                return;
            }
        }
     }
     cout<< -1<<endl;
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
