#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 1e5+123;
int vis[mx];
int taken[mx];
vector<int>adj[mx];
int cnt;

void dfs(int k)
{
    vis[k] = 1;
    cnt++;

    for ( auto j:adj[k] ) {
        if ( vis[j] == 0 ) {
            dfs(j);
        }
    }

}

int main()
{
    optimize();
    int n;
    cin>>n;

    for ( int i = 1; i <= n; i++ ) {
            int a;
            cin>>a;
        if (a != -1 ) {
            adj[a].push_back(i);
            adj[i].push_back(a);
            taken[a] = 1;
        }

    }

        int ans = 0;

    for ( int i = 1; i <= n; i++ ) {
        if ( vis[i] == 0 ) {
            cnt = 0;
            dfs(i);
            ans = max(ans,cnt);
        }
    }

   cout<<ans<<endl;
}





