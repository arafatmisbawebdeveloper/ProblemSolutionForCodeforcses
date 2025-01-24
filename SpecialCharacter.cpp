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
        if ( n%2 ) {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for ( int i = 0; i<n/2; i++ ) {
            cout<<char('A'+i);
            cout<<char('A'+i);
        }
        cout<<endl;
    }

}





