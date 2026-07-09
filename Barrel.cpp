#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    ll n,k,ans=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    reverse(a,a+n);

    for(int i=0;i<=k;i++) {
        ans+=a[i];
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





