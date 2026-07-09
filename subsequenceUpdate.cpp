#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

ll a[100001],b[100001],res1,res2,n,l,r;

int main()
{
    optimize();
    int tc;
    cin>>tc;
    while( tc-- )
    {
        res1=0,res2=0;
        cin>>n>>l>>r;
        for(int i=1; i<=n; ++i)cin>>a[i],b[i]=a[i];
        sort(a+1,a+r+1);
        for(int i=1; i<=r-l+1; ++i)res1+=a[i];
        sort(b+l,b+n+1);
        for(int i=l; i<=r; ++i)res2+=b[i];
        cout<<min(res1,res2)<<'\n';
    }

}





