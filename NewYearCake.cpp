#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     int a,b;
     cin>>a>>b;


     int takenA = 1,takenB = 0;
     int layer = 1;
     bool flag = true;

     while(max(takenA,takenB) <= max(a,b) && min(takenA,takenB) <= min(a,b) ) {

        if(flag) {
            takenB += (1<<layer);
            flag = false;
             layer++;
        }
        else{
            takenA += (1<<layer);
            flag = true;
            layer++;
        }

     }
     cout<<layer-1<<endl;
}
int32_t main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }

}
