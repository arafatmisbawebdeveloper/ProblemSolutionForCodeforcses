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
        vector<ll>v(n);

        for(int i = 0; i < n; i++ ) {
            cin>>v[i];
        }

       sort(v.begin(),v.end());
       int sz = v.size();
       ll ans = 0;
       if(sz == 2) ans = v[0] * v[1];
       else {
        ans = max(v[0]*v[1],v[sz-1]*v[sz-2]);
       }
    cout<<ans<<endl;
    }

}





