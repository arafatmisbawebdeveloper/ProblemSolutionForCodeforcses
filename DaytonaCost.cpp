#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n,k;
    cin>>n>>k;

    bool ans = false;

    for ( int i = 0; i < n; i++ ) {
        int a;
        cin>>a;
        if ( a == k ) {
            ans = true;
        }
    }

    if ( ans ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while ( tc-- ) {
        solve();
    }

}





