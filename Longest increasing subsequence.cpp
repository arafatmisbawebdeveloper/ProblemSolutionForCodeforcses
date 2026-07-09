#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 1e5+123;
int dp[mx];
int n;
vector<int>a(mx);

int solve( int i )
{
    if ( dp[i] != -1 ) return dp[i];

    int ans = 1;

    for ( int j = i+1; j < n; j++ ) {
        if ( a[j] > a[i] ) {
            ans = max( ans, solve(j) + 1);
        }
    }
    return dp[i] = ans;
}

int main()
{
    optimize();
    cin>>n;
    memset(dp,-1,sizeof(dp));

    for ( int i = 0; i < n; i++ ) cin>>a[i];

    int ans = 0;
    for ( int i = 0; i < n; i++ ) {
        ans = max( ans, solve(i));
    }

    cout<<ans<<endl;
}





