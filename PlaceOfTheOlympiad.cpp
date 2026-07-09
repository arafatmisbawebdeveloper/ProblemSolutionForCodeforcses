#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll space = (n*m) - k;
    ll perRow = space / n;
    cout<< m / (perRow+1) <<endl;
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





