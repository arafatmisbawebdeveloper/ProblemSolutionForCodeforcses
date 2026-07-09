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


    string s;
    cin>>s;

    if ( n-k == 1 ) {
        cout<<"YES"<<endl;
        return;
    }

    map<char,int>mp;

    for(auto c:s) mp[c]++;

    int num = 0;

    for(auto u:mp) if( u.second % 2 == 1) num++;

//    cout<<"Num Is "<<num<<endl;

    if ( num - 1 <= k ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while (tc-- ) {
        solve();
    }

}





