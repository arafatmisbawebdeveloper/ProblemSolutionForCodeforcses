#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;
const int mx = 105;
int a[mx];
int b[mx];

int main()
{
    optimize();
    int tc;
    cin>>tc;
    while (tc--) {
        int n;
        cin>>n;

        for ( int i = 0; i < n; i++ ) cin>>a[i];
        for ( int i = 0; i < n; i++ ) cin>>b[i];

        int ans = a[n-1];

        for ( int i = 0; i < n-1; i++ ) {
            if ( a[i] > b[i+1] ) ans += a[i]-b[i+1];
        }
        cout<<ans<<endl;
    }

}
