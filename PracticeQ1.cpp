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
       vector<int>cnt[100];
        for( int i = 0; i < n; i++ ) {
            cnt[i].push_back(i);
        }
        int ans = 1e8;
        for( auto it : cnt ) {
            if( it.size() >= 3 ) {
                sort(it.begin(),it.end());
                ans = min(ans,abs(it[0]-it[1]) + abs(it[1]-it[2]) + abs(it[2]-it[0]));
            }
        }
        if( ans == 1e8 ) cout<< -1<<endl;
        else cout<< ans<<endl;
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }

}
