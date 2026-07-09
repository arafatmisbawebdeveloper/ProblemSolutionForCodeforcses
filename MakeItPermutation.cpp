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
     cout<<2*n - 1<< endl;

     for ( int i = 1; i < n; i++ ) {
        cout << i << " " << 1 << " " << i << endl;
        cout << i << " " << i+1 << " " << n << endl;
     }
     cout << n << " " << 1 << " " << n <<endl;
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
