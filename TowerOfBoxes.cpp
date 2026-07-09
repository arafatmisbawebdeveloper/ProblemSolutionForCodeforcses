#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     int n,m,d;
     cin>>n>>m>>d;
     int st = 0;
     if( m > d ) {
        cout<<n<<endl;
        return;
     }
     else{
        st = d / m +1;
        cout<<(n-1) / st + 1<<endl;
     }
     //cout<<"STACK is "<<st<<endl;
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
