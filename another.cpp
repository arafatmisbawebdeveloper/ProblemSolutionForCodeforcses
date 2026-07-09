#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s = "misbaulhoquearafat";
   string f = "hoq";

   for(int i = 0; i < (s.size()-f.size()); i++) {
    if(s.substr(i,f.size())== f ) {
        cout<<"It's a substring"<<endl;
        cout<<i<<endl;
        break;
    }
   }


}
