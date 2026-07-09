#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--){
	int n;
	string s;
	int f=0;
	cin>>n>>s;
    for (int i=1;i<n;i=i+3)
       if(s[i]!=s[i+1])  f=1;

      if(f==1)cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
}
}
