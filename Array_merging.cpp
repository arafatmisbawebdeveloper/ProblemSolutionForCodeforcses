#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n,a,b,p = -1, s = 1,ans = 0;
    cin>>n;
    int cnt[2*n+1] = { };
    for(int i = 0; i < n; i++) {
        cin>>a;
        if( a == p ) s++;
        else s = 1;
        cnt[a] = max( cnt[a],s);
        p = a;
    }

    p = -1, s = 1;

    for( int i = 0; i < n; i++ ) {
        cin>>b;
        if( b == p ) s++;
        else s = 1;
        ans = max( ans,s+cnt[b]);
        p = b;
    }

    for( int i = 0; i <= 2*n; i++ ) ans  = max( ans,cnt[i]);
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





