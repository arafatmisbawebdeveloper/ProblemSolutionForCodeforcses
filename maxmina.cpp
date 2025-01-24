#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef double dl;
typedef long long ll;

int main()
{
    optimize();

    int t;
    cin>>t;

    while(t--) {
        int n,k,c=0;
        cin>>n>>k;
        vector<int>v;

        for(int i=0;i<n;i++) {
            int a;
            cin>>a;
            v.push_back(a);
        }

        for(auto u:v) {
            c+=u;
        }

            if(c==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;

    }
}

