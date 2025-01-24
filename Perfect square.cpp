#include<stdio.h>
#include<stdbool.h>

const int max= 1e8+123;
bool vis[max];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        vis[i*i]=1;
    }
    int ans=0;
    for( int a=1;a<=n;a++) {
        for(int b=a;b<=n;b++) {
            int d= (a*a) + (b*b);
            if(d>=max) break;
            if(vis[d]) {
                ans++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;

}

