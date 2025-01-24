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

    vector<int>v;
    vector<int>ans;

    for ( int i = 0; i < n; i++ ) {
        int a;
        cin>>a;
        v.push_back(a);
    }

    ans.push_back(v[0]);

    for ( int i = 1; i < n; i++ ) {
        if ( v[i] < v[i-1] ) {
            ans.push_back(1);
          ans.push_back(v[i]);
        }

        else ans.push_back(v[i]);
    }


    cout<<ans.size()<<endl;
    for ( auto u : ans) cout<<u<<" ";
    cout<<endl;
}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while( tc -- ) {
        solve();
    }

}





