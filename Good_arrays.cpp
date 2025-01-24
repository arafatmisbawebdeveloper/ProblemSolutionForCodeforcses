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

        vector<int>v(n+1);
        ll sum1 = 0, sum2 = 0;

        for ( int i = 0; i < n; i++ ) {
            cin>>v[i];
            if ( v[i] == 1 ) sum1++;
             sum2 += v[i];
        }

        if ( sum1 + n <= sum2 && n > 1 ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}





