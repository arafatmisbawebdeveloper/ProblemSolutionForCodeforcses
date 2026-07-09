#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;
const int mx = 3e5+123;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
   vector<int>v(m),vis(n+1);
    for ( int i = 0; i < m; i++ ) {
        cin>>v[i];
    }
    for ( int i = 0; i < k; i++ ) {
         int q;
         cin>>q;
         vis[q] += 1;
    }

    if ( n == k ) {
        for ( int i = 0; i < m; i++ ) {
            cout<<1;
        }
        cout<<endl;
        return;
    }


    if ( n-k > 1 ) {
        for ( int i = 0; i < m; i++ ) {
            cout<<0;
        }
        cout<<endl;
        return;
    }

    else {
       for ( int i = 0; i < m; i++ )
        cout<<!vis[v[i]];
        cout<<endl;
    }
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





