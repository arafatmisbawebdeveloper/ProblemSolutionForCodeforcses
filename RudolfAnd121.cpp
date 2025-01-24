#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 2e5+123;
ll a[mx];

void solve()
{
    int n;
    cin>>n;
    for ( int i = 0; i < n; i++ ) cin>>a[i];
    for ( int i = 0; i < n-2; i++ ) {
        ll x = a[i];
        if ( (2*x) > a[i+1]) {
            cout<<"NO"<<endl;
            return;
        }
        a[i] = 0;
        a[i+1] -= 2*x;
        a[i+2] -= x;
    }
    for ( int i = 0; i < n; i++ ) {
        if ( a[i] != 0 ) {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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





