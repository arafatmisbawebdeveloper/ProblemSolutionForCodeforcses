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
    while(tc--) {
        ll n,k;
        cin>>n>>k;
        vector<int>v(k);

        ll cnt1 = 0,ans = 0;

        for ( ll i = 0; i < k; i++ ) {
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        for( ll i = 0; i < k-1; i++ ) {
             ans += (v[i]-1)*2 + 1;
        }
        cout<<ans<<endl;
    }

}





