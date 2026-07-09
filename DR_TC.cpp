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
    int cnt1 = 0;
    for ( int i = 0; i < s.size();i++ ) {
        if ( s[i] == '1') cnt1++;
    }
    cout<<(n-2)*cnt1 + n<<endl;
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





