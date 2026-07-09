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
    vector<int> v(n);
    v[0] = 3;
    v[1] = 5;

    for ( int i = 2; i < n ; i++ ) {
        v[i] = v[i- 2] + 3;
        if ( (v[i]*3) % (v[i-1]+v[i-2]) == 0) v[i]++;
    }

    for (auto u : v ) cout<<u<<" ";
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





