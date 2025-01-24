#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


int main()
{
    optimize();

    ll tc;
    cin>>tc;

    while( tc -- ) {
           ll n;
            cin>>n;
            vector<ll>v;
            ll two = 0,one = 0;

        for ( ll i = 1; i <= n; i++ ) {

            ll a;
            cin>>a;

        if( a == 1 ) one++;
        else {
            two++;
            v.push_back(i);
         }
       }

        if ( two&1 ) cout<< -1<<endl;
         else {
                if( two == 0 ) cout<<1<<endl;
             else  {
                ll ans = v.size() / 2;
                ans--;
                cout<< v[ans]<<endl;
             }

      }

    }

}





