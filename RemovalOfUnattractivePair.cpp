#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

int main()
{
    optimize();
   int tc;
   cin>>tc;

   while( tc-- ) {
    int n;
    cin>>n;
    string s;
    cin>>s;

    map<char,int>mp;
    for (auto u:s) mp[u]++;
    int k = 0;
    for ( auto u:mp ) k = max(k,u.second);

    if ( k > n/2 ) cout<<2*k - n<<endl;
    else {
        if ( n % 2 ) cout<<1<<endl;
        else cout<<0<<endl;
    }
   }

}





