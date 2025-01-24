#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n,m;
    cin>>n>>m;

    string s,t;
    cin>>s>>t;

    bool ans = 0,flag = 1;

    for ( int i = 0; i < m; i++ ) {
        if ( t[i] == t[i+1]) {
            flag = 0;
            break;
        }
    }

    for ( int i = 0; i < n; i++ ) {
        if ( s[i] == s[i+1]) {
            if ( s[i] == t[0] OR s[i+1] == t[m-1] OR !flag) {
                    cout<<"NO"<<endl;
                    ans = 1;
                    break;
            }

        }
    }

     if (!ans) cout<<"YES"<<endl;

}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while (tc--) {
        solve();
    }

}





