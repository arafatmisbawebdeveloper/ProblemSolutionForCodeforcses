
//Planet somporkitw from codeforces
#include<stdio.h>
int main()
{
    int t,d=0,k,l,e=0,cost=0;
    scanf("%d",&t);
    while(t--)
    {
        cost=0;
        d=0;e=0;
        int n,c,a[1001],b[1001],j;
        scanf("%d %d",&n,&c);
        for(j=1;j<=100;j++)
        {
            b[j]=0;
        }
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            b[a[i]]++;
            if(b[a[i]]<=c)
            {
                cost++;
            }

        }
        printf("%d\n",cost);


    }

}
