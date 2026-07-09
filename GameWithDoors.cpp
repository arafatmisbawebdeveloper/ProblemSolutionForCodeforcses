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
    while( tc-- ) {
        int l,r,L,R;
        cin>>l>>r>>L>>R;
        int ans = 0;
        ans = max(min(r,R) - max(l,L) + (R != r) + ( l != L ),1);

        cout<<ans<<endl;
    }

}





