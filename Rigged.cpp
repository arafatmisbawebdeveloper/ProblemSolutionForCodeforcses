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
        int n;
        cin>>n;

        vector<int> s(n);
        vector<int> e(n);

        for ( int i = 0; i < n; i++ ) {
            cin>>s[i]>>e[i];
        }

        int w = s[0];
        int ed = e[0];
        int ans = w;


//        if ( s[0] == w ) cout<<w<<endl;
//        else if ( s[0] != w && e[0] == ed ) cout<<w<<endl;
//        else cout<<-1<<endl;

           for ( int i = 1; i < n; i++ ) {
            if ( s[i] >= w && e[i] >= ed ) ans = -1;
           }
         cout<<ans<<endl;
    }

}





