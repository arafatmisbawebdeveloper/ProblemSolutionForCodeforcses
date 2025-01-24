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
        int n,m;
        cin>>n>>m;
        if ( n >= m && ((n-m)%2 == 0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}





