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
        int n,m,k;
        cin>>n>>m>>k;
        for ( int i = n; i > m; i-- )
            cout<<i<<" ";
        for ( int i = 1; i <= m; i++ )
            cout<<i<<" ";
        cout<<endl;
    }

}





