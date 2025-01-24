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

    int even = 0, ans = k;

    for ( int i = 0; i < n; i++ ) {
        int a;
        cin>>a;

        if ( a % 2 == 0 ) even++;
         if ( a % k == 0 ) ans = 0;

        ans = min ( ans, k - (a%k));
    }

    if ( k == 4 ) {
        if ( even >= 2 ) ans = 0;
        else if (even == 1) ans = min(ans,1);
        else ans = min(ans,2);
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





