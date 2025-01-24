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
        int n,k;
        cin>>n>>k;

        vector<int>a(n);
        bool sorted = true;

        for ( int i = 0; i < n; i++ ) {
            cin>>a[i];
        }
        for ( int i = 1; i < n; i++ ) {
            if ( a[i] < a[i-1]) sorted = false;
        }

        if ( sorted OR k > 1 ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}





