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
        int n;
        cin>>n;
        vector<int>v(n);
        for ( int i = 0; i < n; i++ ) cin>>v[i];

        int sum = v[0];
        int ans = v[0];

        for ( int i = 1; i < n; i++ ) {
            //if ( sum < 0 ) sum = 0;
            if ( (v[i]%2 == 0 && v[i-1]%2 != 0) OR (v[i]%2 != 0 && v[i-1]%2 == 0)) {
                sum = max(v[i],sum+v[i]);
            }
            else sum = v[i];
            ans = max(ans,sum);
        }
        cout<<ans<<endl;
    }

}





