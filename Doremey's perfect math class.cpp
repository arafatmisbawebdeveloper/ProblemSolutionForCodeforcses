#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


ll gcd(ll a,ll b)
{
    ll temp;
    while (b != 0) {
 	temp = b;
 	b = a % b;
 	a = temp;
    }

    return a;
}

int main()
{
    optimize();
    ll tc;
    cin>>tc;
    while(tc--) {
        ll n,mx=0,mul,i;
        cin>> n;
        ll ar[n];
        for( i=1;i<=n;i++) {
              cin>>ar[i];
            mx = max(ar[i],mx);
            if(i==2) mul = gcd(ar[i],ar[i-1]);
            else if(i>2)
             mul = gcd(ar[i],mul);
        }
        ll ans = mx/mul;
        cout<< ans <<endl;
    }


}
