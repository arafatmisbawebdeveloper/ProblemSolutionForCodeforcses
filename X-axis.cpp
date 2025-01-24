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
        int a,b,c;
        cin>>a>>b>>c;
        int mx = max(max(a,b),c);
        int mn = min(min(a,b),c);
        cout<<mx-mn<<endl;
    }
}





