#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 1e5+123;
vector<int>v(mx);
int dp[mx];
int n;

int solve( int i)
{
    if ( i == n ) return 0;

    if( dp[i] != -1 ) return dp[i];

    int cost = INT_MAX;

    if ( i + 1 <= n) cost = min( cost,abs( v[i+1] - v[i]) + solve(i+1));
    if ( i + 2 <= n) cost = min( cost,abs( v[i+2] - v[i]) + solve(i+2));

    return dp[i] = cost;
}

int main()
{
    optimize();
    cin>>n;

    for ( int i = 1; i <= n; i++ ) cin>>v[i];

    memset(dp,-1,sizeof(dp));

    cout<<solve(0);

}





