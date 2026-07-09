#pragma GCC optimize("Ofast")
#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


ll qry ( ll type, ll l, ll r)
{
    cout<<type<< " " << l << " "<< r << flush <<endl;
    ll x;
    cin>>x;
    return x;
}
void solve()
{
        ll n;
        cin>>n;
		ll c = qry(2,1,n)-qry(1,1,n);
		ll l=0;
        ll r=n;
		while(r-l>1)
		{
			ll mid=(l+r)/2;
			if(qry(2,1,mid)==qry(1,1,mid))l=mid;
			else r=mid;
		}
		cout<<"! "<<r<<' '<<r+c-1<<endl;
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
