#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n,k;
    cin>>n>>k;

    vector<int>ans;

    for ( int i = 0; i < k; i++ ) {
        ans.push_back(i+1);
    }
    for ( int i = n; i > k; i-- ) {
        ans.push_back(i);
    }

    for ( auto u:ans ) cout<<u<<" ";
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





