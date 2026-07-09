#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
        ll x;
        cin>>x;
        if(x<=4){
            cout<<-1<<endl;
            return;
        }
        bool flag = false;
        int ans ;
        for(ll i=1;i<=32;i++){
            ll tmp = (1<<i)-1;
            ll k = x^tmp;
            if((x+tmp)>k && (x+k)>tmp && (tmp+k)>x){
                flag=true;
                ans = tmp;
                break;
            }
        }
        if(flag){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
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





