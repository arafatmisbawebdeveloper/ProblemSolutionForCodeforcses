#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 300;
int a[mx];
int b[mx];

int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        int n,t;
        cin>>n>>t;

        for(int i = 0; i < n; i++) cin>>a[i];
        for(int i = 0; i < n; i++) cin>>b[i];

        int ent = 0,ans = -1;
        for(int i = 0; i < n; i++) {

            if(a[i] <= t) {
                if( ent < b[i]) {
                    ent = max( ent , b[i]);
                      ans = i + 1;
                }
            }
           t = t - 1;
        }

        cout<<ans<<endl;
    }


}





