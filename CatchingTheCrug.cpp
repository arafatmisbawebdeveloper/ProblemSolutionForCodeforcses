#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


void solve()
{
    ll n,rk,ck,rd,cd;
    cin>>n>>rk>>ck>>rd>>cd;

    ll ans = 0;

    if ( rk < rd ) {
        ans = max(ans,rd);
    }
    else if (rk > rd) {
        ans = max(ans,n-rd);
    }
    if ( ck < cd ) {
        ans = max(ans,cd);
    }
    else if ( ck > cd){
        ans = max(ans,n-cd);
    }
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





