#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

typedef double dl;
typedef long long ll;

const int nm=2e5+123;
int a[nm];

int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        int n;
        cin>>n;

        vector<int>b;
        int mx=0,s_mx=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            b.push_back(a[i]);
            mx=max(mx,a[i]);
        }
        sort(b.begin(),b.end());
        int d = b[n-1];
        int x = b[n-2];

        for(int i=0;i<n;i++) {
            if(a[i]==d) cout<<a[i]-x<<" ";

            else  cout<<a[i]-d<<" ";

        }
         cout<<endl;



}
}







