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
    vector<pair<int,int>>v(n);

    for ( int i = 0; i < n; i++ ) {
        cin>>v[i].first;
        v[i].second = i + 1;
    }

    vector<int>ans(n);

    sort(v.begin(),v.end());

    for ( int i = 0; i < n; i++ ) {
        ans[v[i].second - 1] = n - i;
    }

    for ( auto u : ans ) cout<<u<<" ";
    cout<<endl;
}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while ( tc-- ) {
        solve();
    }

}





