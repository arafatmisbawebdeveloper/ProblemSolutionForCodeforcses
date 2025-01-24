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

    vector<int>v(n);

    for ( int i = 0; i < n; i++ ) {
        cin>>v[i];
    }
    if ( n & 1 ) {
        cout<<4<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<2 << " "<<n<<endl;
        cout<<1<< " "<<2<<endl;
        cout<<1<< " "<<2<<endl;
    }

    else {
        cout<<2<<endl;
        cout<< 1<< " "<<n<<endl;
        cout<<1 << " "<<n<<endl;
    }
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





