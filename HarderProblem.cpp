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
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>vis(n+1,0),a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(!vis[a[i]])cout<<a[i]<<' ';
        vis[a[i]]=1;
    }
    for(int i=1;i<=n;i++)if(!vis[i])cout<<i<<' ';
    cout<<'\n';
    }

}





