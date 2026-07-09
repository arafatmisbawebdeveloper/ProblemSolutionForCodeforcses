#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     vector<int>a(3);
     for( auto &x : a ) cin>>x;

     sort(a.begin(),a.end());

     if( a[2]-a[0] > 9 ) {
        cout<<"check again"<<endl;
     }
     else cout<<"final "<<a[1]<<endl;
}
int main()
{
    optimize();
    int tc = 1;
    //cin>>tc;
    while(tc--) {
        solve();
    }

}
