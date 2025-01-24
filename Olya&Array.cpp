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

    ll S_min = 0;
    ll lowestSmin = 1e10;
    ll Min = 1e10;

    while( n-- ) {
        int k;
        cin>>k;
        vector<ll>v(k);

        for( int i = 0; i < k; i++ ) {
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        lowestSmin = min(lowestSmin,v[1]);
        S_min += v[1];
        Min = min(Min,v[0]);

    }

    cout<< S_min + Min - lowestSmin<<endl;

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





