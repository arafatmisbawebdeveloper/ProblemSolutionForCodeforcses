#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     int n,l,r;
     cin>>n>>l>>r;
     vector<ll>a;
     a.push_back(1);

     int cnt = 1;
     int cur = 1;

     for( int i = 1; i < n; i++ ) {
        cnt++;
        int tmp = cnt^cur;
        if( i == r-1 ) {
            int tmp1 = 0;
            for( int j = l-1; j < i; j++ ) {
                tmp1 ^= a[j];
            }
            tmp = tmp1;
        }
        a.push_back(tmp);
        cur ^= tmp;
     }

     for( int i = 0; i < n; i++ ) {
        cout<<a[i]<<" ";
     }
     cout<<endl;
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
