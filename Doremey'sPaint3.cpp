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
    map<int,int>mp;

    for ( int i = 0; i < n; i++ ) {
        int a;
        cin>>a;
        mp[a]++;
    }

    if ( mp.size() < 2 ) cout<<"YES"<<endl;
    else if ( mp.size() == 2 && (abs( mp.begin()->second - mp.rbegin()->second) < 2 ) ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while( tc-- ) {
        solve();
    }

}





