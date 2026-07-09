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
    vector<int>v(n+1);
    set<int>s;

    for ( int i = 1; i <= n; i++ ) s.insert(i);

    for ( int i = 1; i <= n; i++ ) {
        cin>>v[i];
        if ( v[i] != 0 ) s.erase(v[i]);

    }
    if ( s.size() > 0 ) {
        for ( int i = 1; i <= n; i++ ) {
            if ( v[i] == 0 ) {
                auto mis = s.end();
                mis--;
                v[i] = *mis;
                s.erase(mis);
            }
        }
    }


    int l = 1, r = n;

    while(l <= n && v[l] == l ) l++;
    while( r >= 1 && v[r] == r ) r--;

    if(l>=r)cout<<0<<endl;
    else cout<<r-l+1<<endl;
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





