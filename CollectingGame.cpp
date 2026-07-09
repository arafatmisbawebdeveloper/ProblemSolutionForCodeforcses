#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
        int n;
        cin>>n;

        vector<ll>sum(n);
        vector<pair<int,int>>v(n);
        for ( int i = 0; i < n; i++ ) {
            cin>>v[i].first;
            v[i].second = i;
        }

        sort(v.begin(),v.end());

        sum[0] = v[0].first;
         for ( int i = 1; i < n; i++ ) {
            sum[i] = sum[i-1] + v[i].first;
         }

         vector<int>ans(n);
         stack<int>indx;

         for ( int i = 0; i < n; i++ ) {
            indx.push(v[i].second);
            if ( i == n-1 OR sum[i] < v[i+1].first ) {
                while ( !indx.empty() ) {
                    ans[indx.top()] = i;
                    indx.pop();
                }
            }
         }

         for ( int i = 0; i < n; i++ ) cout<<ans[i]<<" ";
         cout<<endl;
}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while( tc-- ) {
        solve();
    }

}





