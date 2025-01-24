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
    string a[n];

    for ( int i = 0; i < n; i++ ) cin>>a[i];

    int ans = 0;

    for ( int i = 0; i * 2 < n; i++ ) {
        for ( int j = 0; j * 2 < n; j++ ) {
            vector<char> s {a[i][j], a[n - 1 - j][i], a[n - 1 - i][n - 1 - j], a[j][n - 1 - i]};
            char mx = *max_element(s.begin(),s.end());
            //cout<<mx<<endl;
            for ( char u : s ) {
                ans += mx - u;
            }
        }
    }

    cout<<ans<<endl;
}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while( tc-- ) {
        solve();
    }

}





