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

    while(tc--) {
        ll a,b;
        cin>>a>>b;

        if ( a == b ) {
            cout<<0<<" "<<0<<endl;
        }

        else {
            ll res = abs(a-b);
           ll mov = min((a % res),res-a % res );

        cout<<res<<" "<<mov<<endl;
        }


    }

}





