// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

const int mx = 2e2+123;
long long dp[2012][mx];

int p[2012], w[2123];
int Sz, n;

long long solve ( int i, int curW )
{
    if ( i > n ) return 0;
    if ( dp[i][curW] != -1 ) return dp[i][curW];

    long long ret1 = 0, ret2 = 0;

    if ( w[i] + curW <= Sz ) ret1 = p[i] + solve ( i+1, w[i] + curW );
    ret2 = solve ( i+1, curW );

    return dp[i][curW] = max ( ret1, ret2 );
}


int main()
{
    cin >> Sz >> n ;
    for ( int i = 1; i <= n; i++ ) {
        cin >> w[i] >> p[i];
    }

    memset ( dp, -1, sizeof ( dp ) );
    cout << solve ( 1, 0 ) << endl;


}
