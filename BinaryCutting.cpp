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
        string s,tmp;
        cin>>s;
        tmp = s;
        char ct;
        ct = s[0];
        int ans = 0;
        for ( int i = 1; i < s.size(); i++ ) {
            if ( ct != s[i])
                ans = ans+1;
             ct = s[i];
        }
        sort(s.begin(),s.end());
       // cout<<"afterSOrting "<<s<<endl;
        int n = s.size();
        if ( s[0] == s[n-1]) cout<<1<<endl;
        else if ( tmp[0] == '1' and ans == 1 ) cout<<ans+1<<endl;
        else cout<<ans<<endl;
    }

}





