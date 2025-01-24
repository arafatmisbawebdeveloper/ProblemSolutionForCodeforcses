#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

int main()
{
    optimize();
    int tc;
    cin>>tc;
    while ( tc-- ) {
        int n;
        cin>>n;
        ll a[n];

        for ( int i = 0; i < n; i++ ) cin>>a[i];

        ll sum = 0;
        ll mx = 0, ans = 0;

        for ( int i = 0; i < n; i++ ) {
            sum += a[i];
            mx = max(mx,a[i]);
            if ( sum - mx == mx ) ans++;
        }
        cout<<ans<<endl;
    }
}





