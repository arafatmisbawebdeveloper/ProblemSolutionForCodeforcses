#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


void solve()
{
    int n,ans = 0;
    cin>>n;
    string s,s1 = "pie",s2 = "map";
    cin>>s;
    if ( n < 3 ) {
        cout<<0<<endl;
        return;
    }
    for ( int i = 0; i <= n - s1.size();  ) {
         if(s.substr(i,s1.size()) == s1 OR s.substr(i,s2.size()) == s2) {
            cout<<s.substr(i,s1.size())<<endl;
            ans++;
            i = i + s1.size();
         }
       else i++;
    }

      cout<<ans<<endl;

    return;
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





