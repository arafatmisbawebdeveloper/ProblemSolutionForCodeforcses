#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    map<int,int>cnt;
    int numK = 0;

    for ( int i = 0; i < n; i++ ) {
        cin>>a[i];
        if( a[i] <= k )
        cnt[a[i]]++;

    }
    int ans = 0;
    for ( int i = 0; i < k ; i++ ) {
        if ( !cnt[i] ) ans++;
    }
    cout<<max(cnt[k],ans)<<endl;
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





