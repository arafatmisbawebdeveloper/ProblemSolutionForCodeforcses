#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    string s;
    cin>>s;

    int ans = 4;
    char ch = '1';

    for ( int i = 0; i < s.size(); i++ ) {
        if (s[i] == '0' ) s[i] += 10;
        ans += abs(ch-s[i]);
        ch = s[i];
    }

    cout<<ans<<endl;

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





