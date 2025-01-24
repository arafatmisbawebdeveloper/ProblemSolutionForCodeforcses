#include<stdio.h> //||\n
int main()
{
    int a[25];
    long long n;
    scanf("%lld",&n);

    int cnt=0;

    while(n>0) {
        a[cnt++]=n%10;
        n=n/10;
    }

    for(int i=0,j=cnt-1;i<j;i++,j--) {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    int temp= a[0];
    for(int i=0;i<cnt;i++) {
        int rev=9-a[i];
        if(rev<a[i]) {
            a[i]=rev;
        }
    }
    if(a[0]==0) a[0]=temp;
    for(int i=0;i<cnt;i++) printf("%d",a[i]);
    printf("\n");


    return 0;
}






