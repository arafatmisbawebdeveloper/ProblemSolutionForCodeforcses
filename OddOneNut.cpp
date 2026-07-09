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
        int a,b,c;
        cin>>a>>b>>c;
        if( a == b ) {
            cout<<c<<endl;
            continue;
        }
        else if( b == c ) {
            cout<<a<<endl;
            continue;
        }
        else {
            cout<<b<<endl;
            continue;
        }
    }

}





