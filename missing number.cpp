#include<stdio.h>
const int mx=1e8+123;
int a[mx];
int b[mx];
int found[mx];
int main()
{
   long long i,j,k,n;
    scanf("%lld",&n);

    for(i=1;i<=n;i++) {
        found[i]=0;
    }

    if(n>=2) {

        for(j=1;j<n;j++) {
            scanf("%lld",&b[j]);
            found[b[j]]++;
        }

        for(k=1;k<=n;k++) {
            if(found[k]<1)
                printf("%lld\n",k);
        }
    }
}
