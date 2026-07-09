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
    string s;
    cin>>s;

    vector<int>p;

    for ( int  i = 0; i < n; i++ ) {
        if ( s[i] == '0') {
            p.push_back(i+1);
        }
    }

    cout<<p.size()<<endl;

    for ( auto i:p ) cout<<i<<" ";
    cout<<endl;
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





