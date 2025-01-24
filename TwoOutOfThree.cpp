#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 1e3;
int a[mx];

void solve()
{
    int n;
    cin>>n;

    map<int,int>mp;
    int num = 0;

    for ( int i = 0; i < n; i++ ) {
        int x;
        cin>>x;
        a[i] = 1;
        mp[x]++;

        if ( mp[x] == 2 ) {
            num++;
            num = min(num,2);
            a[i] = num+1;
        }
    }

    if ( num == 2 ) {
        for ( int i = 0; i < n; i++ ) cout<<a[i]<<" ";
        cout<<endl;
    }
    else cout<<-1<<endl;
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




