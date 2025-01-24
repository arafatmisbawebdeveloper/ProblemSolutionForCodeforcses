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

    while ( tc -- ) {
        string s;
        cin>>s;

        char c = s[0];
        char n = s[1];

        string p = "abcdefgh";
        string a = "12345678";

        vector<string>ans;
        for ( int i = 0; i < 8; i++ ) {
            if ( p[i] != c ) {
                  cout<<p[i]<<n<<endl;;
            }

        }
        for ( int i = 0; i < 8; i++ ) {
            if ( a[i] != n ) {
                  cout<<c<<a[i]<<endl;;
            }

        }


    }

}





