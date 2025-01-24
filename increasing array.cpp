#include<stdio.h>
const int mx = 2e5+123;
int a[mx];

int main()
{
    int n;
    scanf("%d",&n);

        for(int i=1;i<=n;i++) {
            scanf("%d",&a[i]);
        }

        long long ans=0;

        for(int i=2;i<=n;i++) {
            if(a[i]<a[i-1]) {
                ans+= a[i-1] - a[i];
                a[i] = a[i-1];
            }
        }

        printf("%lld\n",ans);
    }

