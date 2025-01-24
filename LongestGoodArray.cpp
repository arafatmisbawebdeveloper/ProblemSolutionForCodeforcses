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
    int tc;
    cin>>tc;
    while(tc-- ) {
        ll l , r;
        cin>>l>>r;

        ll diff = 1;
        ll last = 0;
        ll ans = 1;

        for( int i = l; i <= r; ) {
            i = i + diff;
            diff++;
            last = i;
            ans++;
        }
        if ( r-last <= diff) ans--;
        if ( l == r ) cout<<1<<endl;
        else cout<<ans<<endl;
    }

}





