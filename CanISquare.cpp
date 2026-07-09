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

    while ( tc-- ) {
        int n;
        cin>>n;
        ll sum = 0;
        for ( int i = 0; i < n; i++ ) {
            ll a;
            cin>>a;
            sum += a;
        }

        int b = round(sqrt(sum));
        if ( sqrt(sum) - b == 0 ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}





