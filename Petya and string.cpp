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
     string a,b;
     cin>>a>>b;

     for ( int i = 0; i < a.size(); i++ ) {
        if (!islower(a[i]) ) {
            a[i] = tolower(a[i]);
        }
     }

     for ( int i = 0; i < b.size(); i++ ) {
        if (!islower(b[i]) ) {
            b[i] = tolower(b[i]);
        }
     }

     if ( a == b ) cout<<0<<endl;
     else if ( a < b ) cout<<-1<<endl;
     else cout<<1<<endl;

}





