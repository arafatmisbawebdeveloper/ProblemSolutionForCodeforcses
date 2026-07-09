#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while( tc -- ) {
        int a,b,c;
        cin>>a>>b>>c;

        if ( a == b ) {
            cout<<0<<endl;
           continue;
        }

        if ( a > b ) {
                int ans = 0;
            for ( int i = a; a > b; a-=c) {
                b += c;
                ans++;

                if ( a == b ) break;
            }
            cout<<ans<<endl;
        }

         else {
                int ans = 0;
            for ( int i = b; a < b; b-=c) {
                a += c;
                ans++;

                if ( a == b ) break;
            }
            cout<<ans<<endl;
        }
    }

}





