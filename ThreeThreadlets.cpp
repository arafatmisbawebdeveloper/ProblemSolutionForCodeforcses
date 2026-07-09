#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    vector<ll>v(3);
    for ( int i = 0; i <= 2; i++ ) cin>>v[i];
    sort ( v.begin(),v.end());

    if ( v[0] == v[1] && v[1] == v[2] ) {
        cout<<"YES"<<endl;
        return;
    }

      if ( (v[1] % v[0] != 0) OR (v[2] % v[0] != 0)) {
        cout<<"NO"<<endl;
      }

    else {
        if ( (v[1] % v[0] == 0) && (v[2] % v[0] == 0)) {
        if ( ((v[1] / v[0]) + (v[2] / v[0])) - 2 <= 3 ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }

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





