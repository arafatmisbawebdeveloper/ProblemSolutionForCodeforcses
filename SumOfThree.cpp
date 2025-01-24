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
        ll n;
        cin>>n;

        if ( n < 7 ) cout<<"NO"<<endl;
        else {
             ll a = 1,b = 2,c = n - 3;
             if ( c % 3 == 0 ) {
                c = c - 2;
                b = b + 2;
             }
             if ( a != b && b != c && a != c ) {
                 cout<<"YES"<<endl;
                 cout<<a<<" "<<b<<" " <<c<<endl;
             }
             else {
                cout<<"NO"<<endl;
             }

        }

    }

}





