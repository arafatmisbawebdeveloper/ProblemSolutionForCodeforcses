#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
            int a;
            cin>>a;
            string s;
            map<string,int>cnt;
            for(int i=0;i<a;i++) {
                cin>>s;
                cnt[s]++;
            }

           int ans=0;

           for(auto u:cnt) {
            if( u.second==2) ans++;
           }
           cout<<ans<<endl;
        }

}
