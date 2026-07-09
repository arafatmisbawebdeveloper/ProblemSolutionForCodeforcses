#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n,m;
    cin>>n>>m;
    string ans = "vika";
    int k = 0;
    vector<string>v(n);

    for ( int i = 0; i < n; i++ ) cin>>v[i];

    for (int i = 0; i < m; i++ ) {
        for ( int j = 0; j < n; j++ ) {
            if ( v[j][i] == ans[k]) {
                k++;
                break;
            }
        }
    }

    if ( k == 4 ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while( tc -- ) {
        solve();
    }

}





