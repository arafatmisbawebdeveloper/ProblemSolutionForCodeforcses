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

    vector<int>a(n),pre(n),sf(n);
    for ( int i = 0; i < n; i++ ) cin>>a[i];

    pre[0] = a[0],sf[n-1] = a[n-1];

    for( int i = 1; i < n; i++ ) {
        pre[i] = min(a[i],pre[i-1]);
    }
    for ( int i = n-2; i >= 0; i-- ) {
        sf[i] = max(a[i],sf[i+1]);
    }

    for( int i = 0; i < n; i++ ) {
        if( a[i] == pre[i] || a[i] == sf[i] ) cout<<"1";
            else cout<<'0';
    }
    cout<<endl;
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





