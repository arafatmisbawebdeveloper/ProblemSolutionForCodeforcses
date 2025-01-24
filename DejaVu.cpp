#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n,q,c;
    cin>>n>>q;

    vector<int>v1(n),v2;

    for ( int i = 0; i < n; i++ ) cin>>v1[i];
    for ( int i = 0; i < q; i++ ) {
            cin>>c;
            if ( v2.empty() OR c < v2.back() ) v2.push_back(c);
    }


    for ( int i = 0; i < n; i++ ) {
        for ( auto a:v2 ) {
            if ( v1[i] % (1<<a) ==  0 ) {
                a = a-1;
                v1[i] |=  1<<a;
            }
        }
    }

    for ( auto u:v1) cout<<u<<" ";
    cout<<endl;
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





