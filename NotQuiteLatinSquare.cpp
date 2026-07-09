#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;
const int mx = 4;


void solve()
{
   char a[3][3];
   map<char,int>mp;
   for ( int i = 0; i < 3; i++ ) {
    for (int j = 0; j < 3; j++ ) {
        cin>>a[i][j];
        mp[a[i][j]]++;
    }
   }
   if( mp['A']<3) {
    cout<<'A'<<endl;
    return;
   }
   else if( mp['B'] < 3) {
    cout<<'B'<<endl;
    return;
   }
   else {
    cout<<'C'<<endl;
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





