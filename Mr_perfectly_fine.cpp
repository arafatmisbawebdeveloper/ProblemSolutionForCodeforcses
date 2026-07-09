#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n;
    cin>>n;

         int ans = 1e9;
         int first = 1e9,second = 1e9;

         for(int i = 0; i < n; i++ ) {
            string s;
            int a;
            cin>>a;
            char c;
            cin>>c;
            getline(cin,s);
            s = c + s;

            if( s[0] == '1' ) {
                first = min(first,a);
            }

             if( s[1] == '1') {
                second = min(a,second);
             }

             ans = min(first+second,ans);

             if( s[0] == '1' && s[1] == '1' ) ans = min(ans,a);
             if( s[0] == '0' && s[1] == '0' ) continue;

        }

        if ( first == 1e9 OR second == 1e9 ) cout<<-1<<endl;
        else
        cout<<ans<<endl;
}


        int main()
        {
            optimize();
            int t;
            cin>>t;

            while(t--) {
                solve();
            }

        }





