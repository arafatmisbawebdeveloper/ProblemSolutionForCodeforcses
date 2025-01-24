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

    while ( tc -- ) {
        int n;
        cin>>n;

        vector<int>v(n);

        for ( int i = 0; i < n; i++ ) cin>>v[i];

        int ans = 0;

        for ( int i = 0; i < n-1; i++ ) {
            if ( v[i] > v[i+1]) {
                ans = max(v[i],ans);
            }
        }

        cout<<ans<<endl;
    }

}





