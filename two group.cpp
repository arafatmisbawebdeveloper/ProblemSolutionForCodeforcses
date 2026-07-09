#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,t;
    cin>>t;
    while(t--)
    {
       long long n,b=0,c=0,ans=0;
    cin>>n;
    for(int i=0;i<n;i++) {

          cin>>a;

          if(a<0) c+=abs(a);
          else b+=a;

          ans=b-c;
    }
   cout<<abs(ans)<<endl;

    }

}


