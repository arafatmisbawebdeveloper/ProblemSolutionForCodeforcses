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
    while (tc--) {
        int n,m;
        cin>>n>>m;
        char a[n+1][m+1];
        int cnt = 0, mx = 0,posx = 0,posy = 0;
        for ( int i = 1; i <= n; i++) {
            for ( int j = 1; j <= m; j++ ) {
                cin>>a[i][j];
                if ( a[i][j] == '#' ) cnt++;
            }
            if ( cnt > mx ) {
                mx = cnt;
                posx = i;
            }
            cnt = 0;
        }

        for ( int i = posx; i <= posx; i++ ) {
            for ( int j = 1; j <= m; j++ ) {
                if ( a[i][j] == '#' ) cnt++;
                if ( (mx+1) / 2 == cnt ) {
                    posy = j;
                    break;
                }
            }
        }

        cout<<posx<<" "<<posy<<endl;
    }
}





