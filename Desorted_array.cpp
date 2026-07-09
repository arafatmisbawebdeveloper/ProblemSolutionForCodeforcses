#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;
const int mx = 600;
int a[mx];

int main()
{
    optimize();
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        int dif = 1e9;
        bool sorted = 1;

        for( int i = 0; i < n; i++ ) {
            cin>>a[i];

            if( i > 0 ) {
                dif = min(a[i] - a[i-1],dif);
                if( a[i] < a[i-1] ) sorted = false;
            }

        }

        if ( !sorted ) cout<<0<<endl;
        else cout<<dif/2 + 1<<endl;
    }

}





