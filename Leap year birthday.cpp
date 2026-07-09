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
        int y,n,cnt=0,i;
        cin>>y>>n;
        for(i=y;;i++) {
            if(i%4==0 && i%100!=0 OR i%400==0) cnt++;
            if(n==cnt)
               break;
        }
         cout<<i<<endl;
    }
}





