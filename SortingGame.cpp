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
     string s;
     cin>>s;

     string r = s;
     sort(r.begin(),r.end());

    if( s == r ){
        cout<<"Bob"<<endl;
        return;
    }

    vector<int>ans;
    for( int i = 0;i < n; i++ ){
        if( s[i] != r[i] ) ans.push_back(i+1);
    }
    cout<<"Alice"<<endl;
    cout<<ans.size()<<endl;
    for(auto &i:ans)cout<<i<<" ";
    cout<<endl;
}
int32_t main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }

}
