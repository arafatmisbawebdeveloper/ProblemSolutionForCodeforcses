#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 2e5+123;
const int MOD = 1e9+7;
ll a[mx];


int main()
{
    optimize();
    ll tc,n,k;
    cin>>tc;
    while ( tc-- ) {
        cin>>n>>k;
        for(int i=1;i<=n;i++)   cin>>a[i];

        for(int i=1;i<=n;i++)   a[i]+=a[i-1];

        ll mn=0,ans=0,sm=0;

        for(int i=1;i<=n;i++){
            ans=max(ans,a[i]-mn);
            mn=min(a[i],mn);
        }
        sm = a[n]-ans;
        for(int i=1;i<=k;i++){
            ans+=ans;
            ans%=MOD;
        }
        ans+=sm;
        ans%=MOD;
        if(ans<0)   ans+=MOD;
        cout<<ans<<endl;
    }

}





