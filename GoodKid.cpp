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

        vector<int>v(n);

        for( int i = 0; i < n; i++ ) cin>>v[i];
        int mn = *min_element(v.begin(),v.end());


        sort(v.begin(),v.end());
        v[0] = v[0] + 1;

        ll ans = 1;
        for ( int i = 0; i < n; i++ ) ans *= v[i];

        cout<<ans<<endl;


    }


}





