#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 2e5+123;
int a[mx];
int sum[mx];

int main()
{
    optimize();
     int n,k;
    cin>>n>>k;
    for ( int i =  1; i <= n; i++ ) cin>>a[i];

    for ( int i = 1; i <= n; i++ ) sum[i] = sum[i-1] + a[i];

    int mn = 1e8;
    int ans = 0;

    for ( int i = 1; i <= n-k+1; i++ ) {
        if ( (sum[i+k-1] - sum[i-1]) <= mn ) {
            mn = sum[i+k-1] - sum[i-1];
            ans = i;
        }
    }
    cout<<ans<<endl;

}





