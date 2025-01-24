#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx=1e5+123;
int a[mx];


int main()
{
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
            cin>>a[i];
    }
    sort(a,a+n);
    int x = a[n/2];
    ll ans =  0;
    for(int i=0;i<n;i++) {
        ans+=abs(x-a[i]);
    }
    cout<<ans<<endl;


}





