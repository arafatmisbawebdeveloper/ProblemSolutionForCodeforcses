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
        int n;
        cin>>n;

        vector<int>v(2*n);

        for ( int i = 0; i < 2*n; i++ ) cin>>v[i];

        sort(v.begin(),v.end());

//        for ( auto u:v) cout<<u<<" ";
//        cout<<endl;

       int ans = 0;

       for ( int i =  1; i < n; i++ ) {
        ans += abs(v[i] - v[i-1]);
       }

       for ( int i =  n+1; i < 2*n; i++ ) {
        ans += abs(v[i] - v[i-1]);
       }

       cout<<ans<<endl;

       for ( int i = 0,j = v.size()-1; i < j; i++,j-- ) {
        cout<<v[i] <<" "<<v[j]<<endl;

       }
    }

}





