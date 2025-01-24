#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


void solve()
{
    int l,r;
        cin>>l>>r;

        for ( int i = l; i <= r; i++ ) {
            for ( int j = 2; j <= sqrt(i); j++ ) {
                if ( i % j == 0 ) {
                    cout<<i-j<< " "<<j<<endl;
                    return;
                }
            }
        }
        cout<<-1<<endl;
}
int main()
{
    optimize();
    int tc;
    cin>>tc;

    while ( tc-- ) {
        solve();
    }

}





