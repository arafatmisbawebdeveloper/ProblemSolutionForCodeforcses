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
        int a,b;
        cin>>a>>b;
        if ( ( a%2 == 0) && (b%2 == 0)) {
            cout<<"YES"<<endl;
            continue;
        }
        else if ( ( a!= 0 && a%2 == 0) && (b%2 == 1)) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;

    }

}





