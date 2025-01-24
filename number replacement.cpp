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
    while(t--) {
            int n;
           cin>>n;
          int a[n];

          for(int i=0;i<n;i++) {
            cin>>a[i];
          }

          string s;
          cin>>s;

          map<int,set<char>>c;

          for(int i=0;i<n;i++) {
            c[a[i]].insert(s[i]);
          }



          for(auto u:c) {
            if(u.second.size()>1) b=0;
          }

              if(b==0)  cout<<"NO"<<endl;

            else
                cout<<"YES"<<endl;

    }

}





