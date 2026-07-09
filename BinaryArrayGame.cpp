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
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    if( a[0] == 0 && a[n-1] == 0 ) cout<<"BOB"<<endl;
    else cout<<"ALICE"<<endl;
}
int32_t main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }

}
