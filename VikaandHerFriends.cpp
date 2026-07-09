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

    while( tc-- ) {
        int n,m,k;
        cin>>n>>m>>k;

        int x,y;
        cin>>x>>y;

        string ans = "YES";

        for ( int i = 0; i < k; i++ ) {
            int a,b;
            cin>>a>>b;

            if ( (a+b) % 2 == (x+y) % 2 ) ans = "NO";
        }

        cout<<ans<<endl;
    }

}





