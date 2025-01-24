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
    ll x;
    cin>>x;

    vector<ll>v(n);
    int ans=0;
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    ll amount=0;
    for(int i=n-1;i>=0;i--) {
        ll p = v[i];

        if(p>=x) {
            ans++;
            amount+=(p-x);
        }
        else if(p+amount>=x) {
            ans++;
            amount-=(x-p);
        }
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




