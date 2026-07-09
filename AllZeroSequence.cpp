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
     int zero = 0;

     for( int i = 0; i < n; i++ ) {
        cin>>a[i];
        if(a[i] == 0) zero++;
     }
     if( zero > 0 ) {
        cout<<n-zero<<endl;
        return;
     }

     sort(a.begin(),a.end());
     bool flag = false;
     for( int i = 0; i < n-1; i++ ) {
        if(a[i] == a[i+1] ) flag = true;
     }

     if(flag) cout<<n<<endl;
     else cout<<n+1<<endl;
}
int32_t main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }

}
