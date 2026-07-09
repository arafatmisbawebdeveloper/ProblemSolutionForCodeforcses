#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    int cnt0 = 0,cnt1 = 0,cnt2 = 0;

    for ( int i = 0; i < k; i++ ) {
        if ( s[i] == '0') cnt0++;
        else if ( s[i] == '1') cnt1++;
        else cnt2++;
    }

        if ( n == k ) {
            cout<<string(n,'-')<<endl;
            return;
        }

    int U = 1,D = n;
     U += cnt0;
     D -= cnt1;
     int sU = U + cnt2;
     int sD = D - cnt2;

     for ( int i = 1; i <= n; i++ ) {
        if( i < U OR i > D ) cout<<'-';
        else if( i >= sU && i <= sD ) cout<<'+';
        else cout<<'?';
     }
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
