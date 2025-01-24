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
        int n = s.size();

        for ( int i = 0; i < n-1; i++ ) {
            if ( s[i] == s[i+1]) {
                cout<<s[i+1]<<s[i]<<endl;
                return;
            }
        }

         if ( n < 3 ) {
            cout<<-1<<endl;
            return;
        }

        for ( int i = 0; i < n-2; i++ ) {
            if ( s[i] != s[i+2] and s[i] != s[i+1] and s[i+1] != s[i+2]) {
                cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
                return;
            }
        }

     cout << -1 << endl;
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




