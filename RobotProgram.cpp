#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    ll x,n,k;
    cin>>n>>x>>k;

    string s;
    cin>>s;

    for ( ll i = 0; i < n; i++ ) {
        if ( s[i] == 'L') x-=1;
        else x+=1;

        k--;

        if ( !x ) break;
    }

    ll ans = 0;

    if ( !x ) {
        ans = 1;
       for ( ll i = 0; i < n; ++i ) {

            if ( s[i] == 'L') x -= 1;
            else x+=1;

        if ( !x ) {
            ans += k/(i+1);
            break;
        }
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





