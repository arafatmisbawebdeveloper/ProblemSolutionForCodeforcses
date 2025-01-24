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
    int t;
    cin>>t;

    while( t-- ) {
        int a,b,c;
        cin>>a>>b>>c;

        if ( a == b ) {
            if ( c % 2 == 0 ) cout<<"Second"<<endl;
            else cout<<"First"<<endl;

        }

        else if ( a+c > b+c ) {
            cout<<"First"<<endl;

        }
        else if ( a+c < b+c ) {
            cout<<"Second"<<endl;

        }

    }

}





