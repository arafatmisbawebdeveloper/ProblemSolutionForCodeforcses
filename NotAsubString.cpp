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
        int n = s.size();

        if ( n == 2 && s == "()" ) {
            cout<< "NO"<<endl;
        }

        else if ( s.find(")(") == -1 ) {
            string nans;
            for ( int i = 0; i < n; i++ ) nans += "()";
             cout<<"YES"<<endl;
            cout<<nans<<endl;
        }
        else {
            cout<<"YES"<<endl;
            string ans;
            for ( int i = 0; i < n; i++ ) ans += "(";
            for ( int i = 0; i < n; i++ ) ans += ")";
            cout<<ans<<endl;
        }
    }

}






