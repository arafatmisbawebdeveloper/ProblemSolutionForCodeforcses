#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx=1e2+123;
int a[mx];

int main()
{
    optimize();

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        int a=10-n;
        int c=0;
        for(int i=0;i<a;i++) {
            c+=i;
        }

            cout<<c*6<<endl;
    }


}





