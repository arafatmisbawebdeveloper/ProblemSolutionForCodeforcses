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
    if( n == 1) {
        cout<<1<<endl;
        return;
    }
    if( n == 2 ) {
        cout<<9<<endl;
        return;
    }
    int ans = (n*n) + (n*n - 1) + (n*n - 2) + (n*n - 1 - n);
    int sq = n*n;
    ans = max(ans,((sq - 1) + (n*(n-1)) +( (n*(n-1)) - 1) + ( (n*(n-1)) - 2) + (((n) * (n-2)) - 1)));
    cout<<ans<<endl;
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
