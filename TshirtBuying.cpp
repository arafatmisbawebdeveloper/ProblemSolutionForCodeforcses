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
     vector<ll>p(n),a(n),b(n);

     for( int i = 0; i < n; i++ ) cin>>p[i];
     for( int i = 0; i < n; i++ ) cin>>a[i];
     for( int i = 0; i < n; i++ ) cin>>b[i];

     priority_queue<ll,vector<ll>,greater<ll>>q[5][5];

     for ( int i = 0; i < n; i++ ) {
        q[a[i]][b[i]].push(p[i]);
     }

     ll m;
     cin>>m;

     for ( int i = 0; i < m; i++ ) {
        ll c;
        cin>>c;

        ll ans = 1e18;
        ll f,b;

        for ( int j = 1; j <= 3; j++ ) {
            if(!q[c][j].empty() && q[c][j].top() < ans ) {
                ans = q[c][j].top();
                f = c, b = j;
            }
        }

        for ( int j = 1; j <= 3; j++ ) {
            if(!q[j][c].empty() && q[j][c].top() < ans ) {
                ans = q[j][c].top();
                f = j, b = c;
            }
        }

        if( ans == 1e18 ) ans = -1;
        else {
            q[f][b].pop();
        }

        cout<<ans<<endl;

     }
}

int main()
{
    optimize();
    int tc = 1;

    while(tc--) {
        solve();
    }

}
