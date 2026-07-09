#include<stdio.h> // | \n
#include<string.h>
int main()
{
     int i,n;
    char str[101];
    scanf("%d",&n);
    while(n--) {

   scanf("%s",&str);
    printf("%c",str[0]);
    for(int i=0;i<strlen(str);i++) {
           if(i%2==0)continue;
             printf("%c",str[i]);

        }
         printf("\n");



    }

    return 0;
}


