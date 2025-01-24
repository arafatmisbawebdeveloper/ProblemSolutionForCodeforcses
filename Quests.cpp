#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a;
    vector<int>b;
    for ( int i = 0; i < n; i++ ) {
       int j;
        cin>>j;
        a.push_back(j);
    }

    for ( int i = 0; i < n; i++ ) {
        int k;
        cin>>k;
        b.push_back(k);
    }


    int ans = 0;
    int tmp = 0;
    int mx = 0;

    for ( int i = 0; i < min(n,k); i++ ) {
        tmp += a[i];
        mx = max(mx,b[i]);
        ans = max(ans,tmp + (k-1-i)* mx);
    }

      cout<<ans<<endl;

}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while ( tc-- ) {
        solve();
    }

}





