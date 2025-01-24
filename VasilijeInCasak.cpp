#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{

    /*   Qus a dewa ache n songkok natural number.
      Tw amader "K" songkok number niye sum kore "x" Goton krte hbe.
      Eta tkn possible hbe jdi x er man k songkok number niye minimum j songkata Goton kora jabe and Maximum j songkata
      hbe sei range er mdde thake.

      k element niye minimum sum hbe (k*(k+1)) / 2  and maximum sum hbe total sum theke 1st n-k songkok er biyog...(( n*(n+1)) - ((n-k)*(n-k+1)) ) / 2
      */

    ll n,k,x;
    cin>>n>>k>>x;

    ll l = (k*(k+1)) / 2;
    ll r = ( (n*(n+1)) - ((n-k)*(n-k+1)) ) / 2;

    if ( x >= l && x <= r ) cout<<"YES"<<endl;
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





