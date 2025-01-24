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
    vector<ll>v(n);
    ll cnt0 = 0;
    ll neg = 0;
     ll indx = 1;
    for ( int i = 0; i < n; i++ ) {
        cin>>v[i];
        if ( v[i] < 0 )  neg++,indx = i;
        else if ( v[i] == 0 ) cnt0++;
    }

    if ( neg % 2 == 0 && cnt0 < 1) {
        cout<<1<<endl;
        cout<<indx<< " "<<0<<endl;

    }
    else if ( cnt0 == 0 && neg == 0) {
        cout<<1<<endl;
        cout<<1<< " " <<0<<endl;
    }
    else cout<<0<<endl;
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





