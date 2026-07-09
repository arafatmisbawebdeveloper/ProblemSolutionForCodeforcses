#include<stdio.h> //| \n
int main()
{
    int n,a;
    scanf("%d",&n);
    while(n--) {
       scanf("%d",&a);
       int c=a/2;
       if(c%2==0) {
            printf("YES\n");
        for(int i=2;i<=a;i=i+2) {
            printf("%d ",i);
        }
        for(int j=1;j<a;j=j+2) {
                if(j==a-1) j=j+c;
            printf("%d ",j);

        }
         printf("\n");
       }
       else
        printf("NO\n");
    }

    return 0;
}

