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

    int x,y,k;
    cin>>x>>y>>k;

    if ( x >= y ) {
        cout<<x<<endl;
    }

    else if ( x + k == y ) cout<<x + k<<endl;
    else if ( x + k > y ) cout<<y<<endl;

    else {
        cout<< y + ( y - (x+k) )<<endl;
    }
    }

}





