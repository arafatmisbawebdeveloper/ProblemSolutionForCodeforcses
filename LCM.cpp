#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


ll lcm(ll a,ll b)
{
    ll temp,x=a,y=b;
    while (y != 0) {
 	temp = y;
 	y = x % y;
 	x = temp;
    }

    return (a*b)/x;
}

int main()
{
    optimize();
    ll tc;
    cin>>tc;
    while(tc--) {
        ll n,mul,i,ans;
        cin>> n;
        ll ar[n+1];
        for( i=1;i<=n;i++) {
              cin>>ar[i];
             if(i==1) ans=ar[1];

            else if(i>1) {
                 ans = lcm(ar[i],ans);
            }

        }

        cout<< ans <<endl;
    }


}





