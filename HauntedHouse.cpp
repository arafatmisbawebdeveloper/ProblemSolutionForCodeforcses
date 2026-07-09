#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 1e5+123;
ll dp[mx];

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    reverse(s.begin(),s.end());

    int j = 1;
    dp[0] = 0;

    for ( int i = 1; i <= n; i++ )  {
        if ( s[i-1] == '1' ) {
            s[i-1] = '0';

            while ( (j < n && s[j] == '1') OR (j<n && j < i))   j++;

            if ( j == n ) dp[i] = -1;
            else {
                s[j] = '1';
                dp[i] = dp[i-1] + (j - (i-1));
            }
        }

        else {
            dp[i] = dp[i-1];
        }
    }

    for ( int i = 1; i <= n; i++ ) cout<<dp[i]<<" ";
    cout<<endl;
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





