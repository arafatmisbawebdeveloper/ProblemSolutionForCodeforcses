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
        int n,k,ans = 0;
        cin>>n>>k;

        string s;
        cin>>s;

        for ( int i = 0; i < n; i++ ) {
            if ( s[i] == 'B') {
                ans++;
                i = i + k - 1;
            }
        }
       cout<<ans<<endl;
    }

}







