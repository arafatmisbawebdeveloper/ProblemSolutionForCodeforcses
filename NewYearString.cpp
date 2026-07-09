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
     if (s.find("2025") >= n || s.find("2026") < n)
        cout << "0\n";
    else
        cout << "1\n";
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
