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

    int n,x;
    cin>>n>>x;


     int mx = 0;
        int tmp = 0;

    for ( int i = 0; i < n; i++ ) {
        int a;
        cin>>a;
       mx = max( mx,a-tmp);
       tmp = a;

    }

    cout<<max(mx,2*(x-tmp))<<endl;

    }
}





