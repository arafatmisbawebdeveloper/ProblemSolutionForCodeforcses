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
    int n,ans=0;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++)
            if(a[j]>a[i]) ans++;
        else break;

    }
    cout<<ans<<endl;
    }





