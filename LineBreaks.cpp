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
    while(tc--) {
        int n,m;
        cin>>n>>m;
        vector<string>v(n);
        int sum = 0;
        int ans = 0;
        for ( int i = 0; i < n; i++ ) {
            cin>>v[i];
            for ( auto c : v[i] ) sum++;
            if ( sum <= m ) ans++;
        }
        cout<<ans<<endl;
    }

}





