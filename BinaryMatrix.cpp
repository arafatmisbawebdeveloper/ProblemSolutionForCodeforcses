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
        int n,cnt0 = 0;
        cin>>n;
        string s;
        cin>>s;
        int ck = sqrt(n) - 2;
        int sq = sqrt(n);
        for ( int i = 0; i < n; i++ ) {
            if ( s[i] == '0' ) cnt0++;
        }
           //cout<<floor(sqrt(n))<< "AND "<<sqrt(n)<<endl;
        if (cnt0 == (ck*ck) && sqrt(n) == floor(sqrt(n))) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}





