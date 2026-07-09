#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


void solve()
{
    int n,s;
    cin>>n>>s;
    int one = 0, two = 0, zero = 0,sum = 0;

    for( int i = 0; i < n; i++ ) {
        int a;
        cin>>a;
        sum += a;

        if ( a == 1 ) one++;
        else if ( a == 2 ) two++;
        else zero++;
    }
    if ( sum == s OR  s>= sum+2 ) cout<<-1<<endl;
    else {
        for ( int i = 0; i < zero; i++ ) cout<<0<<' ';
        for ( int i = 0; i < two; i++ ) cout<<2<<' ';
        for ( int i = 0; i < one; i++ ) cout<<1<<' ';
        cout<<endl;
    }
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





