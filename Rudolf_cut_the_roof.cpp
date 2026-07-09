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
        int n;
        cin>>n;

        int ans = 0;

        for(int i = 0; i < n; i++ ) {
            int a,b;
            cin>>a>>b;
            if ( a > b ) ans++;
        }

        cout<<ans<<endl;
    }

}





