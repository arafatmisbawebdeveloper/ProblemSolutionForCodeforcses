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
    string ans;
    while ( tc-- ) {
        int n;
        cin>>n;
        for ( int i = 1; i <= n; i++) {
            for ( int j = 1; j <= n; j++) {
                if ( (i+j)%2 == 0 ) {
                     cout<<"##";
                    ans += "##";

                }
                if((i+j) % 2 == 1){
                        cout<<"..";
                        ans += "..";

                }
            }
            cout<<endl;
            cout<<ans<<endl;
            ans.clear();
        }
    }

}





