#include<bits/stdc++.h>
using namespace std; //| \n
int main()
{
    int n,a,c;
    scanf("%d %d",&n,&a);


       while(a--) {
        if(n%10==0) {
         n=n/10;
        }
        else n= n-1;
       }
       printf("%d\n",n);

    return 0;
}

