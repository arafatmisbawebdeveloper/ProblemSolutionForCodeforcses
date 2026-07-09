#include<stdio.h>
#include<stdbool.h>

bool vis[30][60];

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<=n;i++)
    {
        char type;
        int rank;
        scanf(" %c %d", &type, &rank);
        vis[type-'A'][rank]=1;

    }

    char str[] = "SHCD";

    for(int i=0;i<4;i++){
        for(int j=1;j<=13;j++){
            if(!vis[str[i]-'A'][j]){
                printf("%c %d\n",str[i],j);
            }
        }
    }
    return 0;
}

