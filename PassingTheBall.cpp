#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
typedef double dl;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cur = 0;
    vector<int> vis(n,0);

    vis[cur] = 1;

    for(int i=0;i<n;i++){
        if(s[cur] == 'R') cur++;
        else cur--;

        vis[cur] = 1;
    }

    int ans = 0;
    for(int x : vis) ans += x;

    cout << ans << endl;
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
