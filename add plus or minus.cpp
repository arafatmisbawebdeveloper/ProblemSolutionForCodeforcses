#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,j=0;
        cin>>n;
        string a,s;
        cin>>s;
        for(int i=1;i<n;i++) {
            if(s[i]=='1'){
                j = !j;
                if(j) a+='-';
                else a+='+';
              }
             else a+='+';
        }
         cout<<a<<"\n";

         }
}



