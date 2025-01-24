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
    int n;
    cin>>n;

    while ( n-- ) {
        string s;
        cin>>s;
        int cnt1 = 0,cnt0 = 0;

        for ( int i = 0; i < s.size();i++ ) {
            if ( s[i] == '0') cnt0++;
            else cnt1++;
        }

        for ( int i = 0; i < s.size(); i++ ) {
            if ( s[i] == '0' ) {
                    if (cnt1>0) cnt1--;
                    else break;
                    }

            else {
                if (cnt0 > 0 ) cnt0--;
                else break;
            }
        }
        cout<<cnt1+cnt0<<endl;
    }

}





