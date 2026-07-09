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
    int cnt0 = 0, cnt1 = 0,neg1 = 0,ans = 0;

    for ( int i = 0; i < n; i++ ) {
        int x;
        cin>>x;
        if( x == 0) cnt0++;
        else if ( x == 1 ) cnt1++;
        else neg1++;
    }
    if ( neg1 % 2 ) ans += 2;
    ans += cnt0;
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





