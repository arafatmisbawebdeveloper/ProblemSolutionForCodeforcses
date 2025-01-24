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
        ll n;
        cin>>n;
        if(n%2!=0) cout<<-1<<endl;
        else cout<<1<<" "<<n/2<<endl;
    }

}





