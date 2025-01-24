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

    while ( tc-- ) {
         string s,ans = "";
    cin>>s;
    int n = s.size();
    int lt = s.size()-1;
    for ( int i = n-1; i >= 0; i-- ) {
        if ( s[i]  == '0' ) lt--;
    }
    for ( int i = 0; i < lt; i++ ) ans.push_back(s[i]);
    cout<<ans<<endl;
    }

}





