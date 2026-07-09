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
        cin >> n;
        vector<long long> a(n+1);
        for (int i = 1; i <= n; i++ ) cin >> a[i];

        ll ans = 0;
        ll pref = a[0];

        for (int i = 1; i <= n; i++) {
            pref = max(pref, a[i]);
            if (i % 2 == 0) {
                a[i] = pref;
             }
        }

        if ( n % 2 == 0 ) a[n] = pref;

        for ( int i = n-1; i >= 1; i-- ) {
            if ( i % 2 == 0 ) {
                if ( a[i] <= a[i+1] ) {
                    ans += (a[i+1]-a[i]+1);
                }
            }
            else{
                if( a[i] >= a[i+1]) {
                    ans += a[i] - a[i+1] +1;
                    a[i] = a[i+1] - 1;
                }
            }
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





