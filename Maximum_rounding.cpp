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
    int t;
    cin>>t;

    while(t--) {
        string s;
        cin>>s;

        int B = -1;

        for ( int i = s.size()-1;i; i-- ) {
            if( s[i] >= '5') {
                s[i-1]++;
                B = i;
            }
        }

        if ( s[0] >= '5') {
            cout<<'1';
            B = 0;
        }

        for ( int i = B; i < s.size(); i++ ) s[i] = '0';

        cout<<s<<endl;

    }

}





