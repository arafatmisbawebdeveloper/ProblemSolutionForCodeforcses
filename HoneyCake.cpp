#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     ll w,h,d,n;
	cin>>w>>h>>d>>n;

	ll x,y,z;
	x = __gcd(n,w);
	y = __gcd(n/x,h);
	z = __gcd(n/(x*y),d);
	if( x*y*z == n ) cout<<x-1<<" "<<y-1<<" "<<z-1;
	else cout<<-1;
}
int32_t main()
{
    optimize();
    int tc;
   tc = 1;
    while(tc--) {
        solve();
    }

}
