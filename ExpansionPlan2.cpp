#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
      ll n,x,y;
      cin>>n>>x>>y;
      x = abs(x);
      y = abs(y);

       string s;
       cin>>s;
       ll a,b;

       for(ll i = 0; i < n; i++){
        if(s[i] == '8'){
            x--;
            y--;
        }
        else{
            (x > y)?x--:y--;
        }
       }

       if(x <= 0 and y <= 0)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }

}
