#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int x,y,n;
    cin>>x>>y>>n;

     vector<int>v(n);

    int dif = y - x;
    int pos = n - 1;
    int cnt = 1;

    if ( y - x < (n*(n-1)/2) ) {
        cout<<-1<<endl;
    }

    else {

       v[0] = x;
       v[n-1] = y;

       while( pos-- && pos != 0) {
        v[pos] = v[pos+1] - cnt;
        cnt++;
        //cout<<"THE pos IS "<<pos<<endl;
       }

       for ( auto u : v ) cout<<u<<" ";
       cout<<endl;

    }
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





