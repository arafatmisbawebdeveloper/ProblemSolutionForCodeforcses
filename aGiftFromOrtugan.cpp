#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n,mx = 0,mn = 1e8;
    cin>>n;
    for ( int i = 0; i < n; i++ ) {
        int a;
        cin>>a;
        mx = max(mx,a);
        mn = min(mn,a);
    }
    cout<<(mx-mn)*(n-1)<<endl;
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }

}





