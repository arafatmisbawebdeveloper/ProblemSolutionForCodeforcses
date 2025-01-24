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
        ll n;
        cin>>n;

        vector<int>v(n);
        ll ans = n;
        ll even = 0, odd = 0;

        for ( int i = 0; i < n; i++ ) {
              string s;
              cin>>s;
              if ( s.size() % 2 == 0 ) even++;
              else odd++;
        }

        if ( even > 0 ) {
            if (  even % 2 == 0 )  ans += even;
            else ans += even*2;
        }

        if ( odd > 0 ) {
            if (  odd % 2 == 0 )  ans += odd;
            else ans += odd*2;
        }

           cout<<ans<<endl;

    }






