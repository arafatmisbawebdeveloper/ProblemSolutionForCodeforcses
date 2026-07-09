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

    while( tc -- ) {
        string s;
        cin>>s;
        string ans = "";

        for ( int i = 0; i < s.size(); i++ ) {
            if ( s[i] == '1' OR s[i] == '7' ) ans += s[i];
        }
        cout<<ans<<endl;
    }

}





