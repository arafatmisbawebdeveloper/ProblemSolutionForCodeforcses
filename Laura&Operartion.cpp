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
        int j = 0,k = 0, l = 0;
         if ( ((a % 2) == ( b % 2)) && ((a%2) == (c % 2)) ) l = 1, j = 1, k = 1;
        else if ( (a % 2) == ( b % 2) ) l = 1;
        else if ( ( b % 2) == ( c % 2) ) j = 1;
        else if ( (a % 2) == (c % 2) )  k = 1;


        cout<<j<<" "<<k<<" "<<l<<endl;
    }

}





