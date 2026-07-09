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
    map<int,int>cnt,need;

    for ( int i = 0; i < n; i++ ) {
        cin>>a[i];
        cnt[a[i]]++;
    }
    for ( int i = 0; i < n; i++ ) {
        if( cnt[a[i]] % k ) {
            cout<<0<<endl;
            return;
        }
        need[a[i]] = cnt[a[i]]/k;
    }
    map<int,int>cur;
    ll ans = 0;
    int l = 0;

    for ( int  r = 0; r < n; r++ ) {
        cur[a[r]] += 1;
        while( cur[a[r]] > need[a[r]] ) {
            cur[a[l]] -= 1;
            l++;
        }
        ans += (r-l+1);
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





