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
        int n;
        cin>>n;
        vector<int>v(2*n);

        int odd = 0, even = 0;

        for ( int i = 0; i < 2*n; i++ ) {
            cin>>v[i];
            if ( v[i]%2 == 0 ) even++;
            else odd++;
        }

        if( even == odd ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }


}





