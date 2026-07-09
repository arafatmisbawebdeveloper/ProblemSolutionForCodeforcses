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
    vector<int>v(n+1);
    for ( int i = 1; i <= n; i++ ) cin>>v[i];
    sort(v.begin(),v.end());
    int mid = n/2 + n%2;
    int cnt = 0;
    for ( int i = mid; i <= n ; i++ ) {
        if ( v[i] == v[mid]) cnt++;
    }
    cout<<cnt<<endl;
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





