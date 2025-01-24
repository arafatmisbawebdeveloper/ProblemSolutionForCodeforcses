#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 2e3+112;
int a[mx];
int main()
{
    optimize();
    int n;
    cin>>n;

    for ( int i = 1; i <= n; i++ ) cin>>a[i];

    int ans = 0, cnt = 0;

    for( int i = 1; i <= n; i++ ) {
        int u = a[i];
        cnt = 0;
        while ( u != -1) {
            u = a[u];
            cnt++;
        }
        ans = max(ans,cnt);
    }

    cout<<ans+1<<endl;

}





