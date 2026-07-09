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
     cin>>n;
     vector<int>a(n);

     for ( int i = 0; i < n; i++ ) cin>>a[i];

     for( int i = 1; i < n; i++ ) {
        if(abs( a[i] - a[i-1] ) <= 1) {
            cout<<0<<endl;
            return;
        }
     }

     int ans = INT_MAX;

     for ( int i = 0; i < n-1; i++ ) {
             int mn = a[i + 1], mx = a[i + 1];
        for( int j = i+2; j < n; j++ ) {
             if (mn <= a[i] && mn <= a[j] || mx >= a[i] && mx >= a[j]) {
                ans = min(ans, j - i - 1);
            }
            mn = min(mn, a[j]);
            mx = max(mx, a[j]);
        }
     }
     if ( ans == INT_MAX)
          cout<<-1<<endl;
     else
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
