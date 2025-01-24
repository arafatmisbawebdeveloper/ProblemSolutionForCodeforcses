#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
typedef double dl;
typedef long long ll;
const int mx=1e5+123;

int main()
{
    optimize();
    int t;
    cin>>t;

    while(t--) {
            int a;
            cin>>a;
            vector<int>v(a);
            vector<int>b(a);


            for(int i=0;i<a;i++) {
             int n;
               cin>>n;
               v.push_back(n);

            }

            for(int i=0;i<a;i++) {
             int k;
               cin>>k;
               b.push_back(k);

            }

            ll ans=0;

             for(auto u:v) {
               ans+=u;
             }

         sort(b.begin(),b.end());
         b.pop_back();

         ll c=0;

        for(auto u:b) {
            c+=u;
        }
         cout<<c+ans<<endl;

    }

}



