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
        int n,m;
        cin>>n>>m;
        string s,x;
        cin>>s>>x;
        int ans = 0;

       for ( int i = 0; i < m; i++ ) {
        if ( s.find(x) == -1 ) {
            s+=s;
            ans++;
        }
         if(s.size() >= (m+1) * (n + 1)) {
                ans = -1;
                break;
            }
       }

//       if ( ans >= m ) cout<<-1<<endl;
//       else
        cout<<ans<<endl;

    }

}



