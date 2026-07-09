#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 100;
int a[mx];

void solve()
{
    int n;
    cin>>n;
    int ans = 0;

    for ( int i = 1; i <= n; i++ ) {
        cin>>a[i];
    }


    for ( int i = 1; i <= n; i++ ) {
        if (a[i] > 0 && a[i-1] == 0 ) ans++;
    }

    cout<<min(ans,2)<<endl;

}

int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) solve();

}





