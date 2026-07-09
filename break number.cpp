#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=7;i++) {

        int a=pow(2,i);
        if(n<a) {
            i--;
            a = pow(2,i);
            cout<<a<<endl;
            return 0;
        }
    }
   return 0;
}
