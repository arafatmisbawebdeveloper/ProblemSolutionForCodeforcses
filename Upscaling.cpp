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
    string ans;
    for( int i = 1; i <= n; i++ ) {
        for(int j = 1; j <= n; j++) {
            if((i+j) % 2 == 0 ) {
                cout<<"##";
                ans += "##";
            }
            else{
                cout<<"..";
                ans += "..";
            }
        }
        cout<<endl;
        cout<<ans;
        ans.clear();
        cout<<endl;
    }
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while ( tc-- ) {
        solve();
    }

}





