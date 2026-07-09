#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     int n;
     cin>>n;
     vector<pair<ll,ll>>v(n);

     for ( int i = 0; i < n; i++ ) {
        cin>>v[i].first;
        v[i].second = i+1;
     }

     sort(v.begin(),v.end());

     int ans = 0;
     for ( int i = 0; i < n; i++ ) {
        for( int j = i+1; j < n; j++ ) {
            if (v[i].first * v[j].first >= 2 * n) break;
			if (v[i].first * v[j].first == v[i].second + v[j].second) ans++;
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
