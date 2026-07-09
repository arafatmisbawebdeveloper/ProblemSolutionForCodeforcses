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

     for( int i = 1; i < s.size(); i++ ) {
        if (s[i - 1] == '*' && s[i] == '*') {
            cout << "-1"<<endl;
            return;
        }
        if (s[i - 1] == '>' && s[i] == '*') {
            cout << "-1"<<endl;
            return;
        }
        if (s[i - 1] == '>' && s[i] == '<') {
            cout << "-1"<<endl;
            return;
        }
        if (s[i - 1] == '*' && s[i] == '<') {
            cout << "-1"<<endl;
            return;
        }
     }
     int ans = 0;
     int n = s.size();
     for (int i = 0; i < n; i++) {
        if (s[i] == '<') {
            ans = max(ans, i + 1);
        } else if (s[i] == '>') {
            ans = max(ans, n - i);
        } else if (s[i] == '*') {
            ans = max(ans, max(i + 1, n - i));
        }
    }
    cout << ans << endl;
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
