#include<stdio.h>
int main()
{
    int a,c,i=1,j,e=0,k;
    scanf("%d",&a);
    while(a--)
        {
            scanf("%d",&c);
                   for (int i = 1; ; i++)
		{
			if (i % 3 == 0 || i % 10 == 3)
				continue;
			if (--c == 0)
			{
				printf("%d\n",i);
				break;
			}
		}

        }
        return 0;

}

