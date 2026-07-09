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
    vector<int>a(n),b(n),tmp(n);
    for ( int i = 0; i < n; i++ ) cin>>a[i];
    for ( int i = 0; i < n; i++ ) cin>>b[i];
    ll ans = 0;
    for ( int i = 0; i < n; i++ ) {
        ans += max(a[i],b[i]);
        tmp[i] = min(a[i],b[i]);
    }
    sort(tmp.rbegin(),tmp.rend());
    for ( int i = 0; i < k-1; i++ ) {
        ans += tmp[i];
    }
    cout<<ans+1<<endl;
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





