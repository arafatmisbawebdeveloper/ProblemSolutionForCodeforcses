#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     ll n,x;
     cin>>n>>x;
     vector<ll>a(n);
     for( int i = 0; i < n; i++ ) cin>>a[i];

     sort ( a.begin(),a.end());

     ll l = 0, r = n-1;
     ll s = 0, point = 0;
     vector<ll>ans;

     while( l <= r ) {
        ll nextLevelUpNeed = x - (s%x);
        if( a[r] >= nextLevelUpNeed ) {
            s += a[r];
            ans.push_back(a[r]);
            point += a[r];
            r--;
        }
        else {
            s += a[l];
            ans.push_back(a[l]);
            l++;
        }
     }
     cout<<point<<endl;
     for( int i = 0; i < ans.size(); i++ ) {
        cout<<ans[i]<<" ";
     }
     cout<<endl;
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
