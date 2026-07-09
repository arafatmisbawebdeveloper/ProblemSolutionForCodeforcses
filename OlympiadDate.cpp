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
    map<int,int>mp;
    bool flag = 0;
    for ( int i = 0;i < n; i++ ) {
        int a;
        cin>>a;
        mp[a]++;
        if( mp[0]>=3 && mp[1] >=1 && mp[2] >=2 && mp[3] >= 1 && mp[5] >=1 && !flag) {
            cout<<i+1<<endl;
            flag = 1;
        }
    }
    if(!flag) cout<<0<<endl  ;
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) solve();

}





