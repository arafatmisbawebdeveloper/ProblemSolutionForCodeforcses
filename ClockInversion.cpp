#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


void solve()
{
    string s;
    cin>>s;
    int h = (s[0]-'0')*10 + s[1]-'0';
    int Ph = 0;

    if ( h == 0 ) {
        cout<<12<<':'<<s[3]<<s[4]<<" AM"<<endl;
      return;
    }
    if ( h >= 12 ) {
             if ( h > 12) {
                Ph = h%12;
                if( Ph < 10 ) cout<<'0'<<Ph<<':'<<s[3]<<s[4]<<" PM"<<endl;
                else cout<<h%12<<':'<<s[3]<<s[4]<<" PM"<<endl;
             }

         else
            {
                if ( h <= 9 ) cout<<'0'<<h<<':'<<s[3]<<s[4]<<" PM"<<endl;
                else cout<<h<<':'<<s[3]<<s[4]<<" PM"<<endl;
            }
    }
    else {
            if ( h <10 ) cout<<'0'<<h<<':'<<s[3]<<s[4]<<" AM"<<endl;
        else
        cout<<h<<':'<<s[3]<<s[4]<<" AM"<<endl;
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
