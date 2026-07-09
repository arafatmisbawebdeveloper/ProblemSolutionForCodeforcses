#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     int n; cin >> n;
        ll sum = 0,z = 0;
        for(int i=0; i<n; i++) {
            ll x;
            cin >> x;
            sum += x;
            if( x == 0 ) z++;
        }
        ll ans = sum - n + 1;
        if(ans > n) ans = n;
        cout << min(ans,n-z) << '\n';
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
