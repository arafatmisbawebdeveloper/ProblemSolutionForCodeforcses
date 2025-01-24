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
        int n,f,k;
        cin>>n>>f>>k;
        vector<int>a(n+2);
        for ( int i = 0; i < n; i++ ) cin>>a[i];
        int fv = a[f-1];
        sort(a.rbegin(),a.rend());
        bool done = 0;
        for ( int i = 0; i < k; i++ ) {
            if(a[i] == fv ) {
                done = 1;
                break;
            }
        }
        if ( done ) {
            if(a[k] == fv ) cout<<"Maybe"<<endl;
            else cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

        //for ( int i = 0; i < n; i++ ) cout<<a[i]<<" ";
    }

}





