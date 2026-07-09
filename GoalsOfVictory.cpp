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

    int ans = 0;
            int gA = 0,gR = 0;

    for ( int i = 0; i < n-1; i++ ) {
        int a;
        cin>>a;

        if ( a < 0) gR += abs(a);
        else gA += a;
    }
//    cout<<"gA "<<gA<<endl;
//    cout<<"gR "<<gR<<endl;
    ans = gA - gR;
    if( gA > gR ) cout<<-ans<<endl;
    else
    cout<<abs(ans)<<endl;
}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while( tc-- ) {
        solve();
    }

}





