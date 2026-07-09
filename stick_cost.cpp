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
    int n;
    cin>>n;
    vector<ll>v(n);

    for(int i=0;i<n;i++) {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int mid = n/2;
    ll check = v[mid];
    ll ans=0;

    for(int i=0;i<n;i++) {
        ans+=abs(check-v[i]);
    }

    cout<<ans<<endl;
}





