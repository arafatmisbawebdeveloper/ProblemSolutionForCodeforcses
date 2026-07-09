#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

bool cmp(const pair<int,int> &p1,const pair<int,int> &p2)
{
    if(p1.second < p2.second) return 1;
    else if(p1.second == p2.second) return (p1.first > p2.first);
    else return 0;
}

void solve()
{
    ll n,p;
    cin>>n>>p;

    vector<pair<ll,ll>>v(n);

    for ( int i = 0; i < n; i++ ) cin>>v[i].first;
    for ( int i = 0; i < n; i++ ) cin>>v[i].second;

    sort(v.begin(),v.end(),cmp);

    // for ( int i = 0; i < n; i++ ) cout<<v[i].first<<" "<<v[i].second<<endl;

    int cnt = 1;

    ll ans = p;

    for ( int i = 0; i < n; i++ ) {
           // cout<<"THE CNT IS "<<cnt<< "The ans is "<<ans<<endl;
          if ( v[i].second > p ) break;
          ans += v[i].second * min(n-cnt,v[i].first);
          cnt += min (v[i].first,n-cnt);
      }

      ans += p * (n-cnt);


      cout<<ans<<endl;
}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while (tc--) {
        solve();
    }

}
