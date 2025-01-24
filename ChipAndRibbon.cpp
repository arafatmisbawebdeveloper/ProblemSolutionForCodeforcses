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
    vector<int>v(n);

    for ( int i = 0; i < n; i++ ) cin>>v[i];
    ll p = 0,sum = 0;

    for ( int i = 0; i < n; i++ ) {
            if ( sum < 0 ) sum = 0;
        if ( p < v[i]) {
           sum += v[i] - p;
        }
           p = v[i];
    }
    cout<<sum-1<<endl;
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






