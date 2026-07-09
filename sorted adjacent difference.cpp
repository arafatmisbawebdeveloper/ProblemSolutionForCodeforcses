#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


void solve()
{
    ll n;
    cin>>n;
    ll a[n+1];
    ll ans[n+1];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll k = n-1;

    if(n%2==0) {
        for(ll i=0;i<n/2;i++) {
            ans[k--]=a[n-1-i];
            ans[k--]=a[i];
        }
    }

    else {
            ans[0]=a[n/2];
            for(ll i=0;i<n/2;i++) {
            ans[k--]=a[n-1-i];
            ans[k--]=a[i];
        }
    }

    for(ll i=0;i<n;i++) {
            cout<<ans[i]<<" ";
    }
    cout<<endl;

}
int main()
{
    optimize();
    ll tc;
    cin>>tc;
    while(tc--) {
       solve();
    }
}





