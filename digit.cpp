#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;
const ll mx=5e3+123;

int main()
{
    optimize();
        string s="1";

            for(ll i=2;i<=mx;i++) {
              string s1 =to_string(i);
             s=s+s1;
          }
           int tc;
          cin>>tc;
        while(tc--) {
                ll n;
               cin>>n;
           cout<<s[n-1]<<endl;
        }


}





