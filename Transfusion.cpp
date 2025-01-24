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
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll sm = 0;

        for ( int i = 0; i < n; i++ ) {
            cin>>v[i];
            sm += v[i];
        }

        if( sm % n ) {
            cout<<"NO"<<endl;
            continue;
        }

        ll mean = sm/n;

         for ( int i = 1; i < n-1; i++ ) {
            ll tmp = mean - v[i-1];
            v[i-1] += tmp;
            v[i+1] -= tmp;
         }

         if ( is_sorted(v.begin(),v.end()) && v.front() == v.back() && v[0] >= 0 ) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;

//         for (auto u:v ) cout<<u<<" ";
//         cout<<"and mean is "<<mean<<endl;
    }

}





