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
        ll a[n][m];
        for ( int i = 0;i < n; i++ ) {
            for ( int j = 0; j < m; j++ ) {
                cin>>a[i][j];
            }
        }

        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < m; j++ ) {
                ll val = 0;
                if (i) val = max(val,a[i-1][j]);
                if ( i < n-1 ) val = max(val,a[i+1][j]);
                if (j) val = max(val,a[i][j-1]);
                if ( j < m-1 ) val = max(val,a[i][j+1]);

                a[i][j] = min(val,a[i][j]);
            }
        }
        for ( int i = 0; i < n ; i++ ) {
            for ( int j = 0; j < m ; j++ ) {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}




