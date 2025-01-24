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
        int n,z =0 ,o = 0;
        cin>>n;
        string s;
        cin>>s;

        bool ans = false;

       for ( auto u : s ) {
        if ( u == '0') {
            ans = true;
            break;
        }
       }
     if ( ans ) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

    }

}





