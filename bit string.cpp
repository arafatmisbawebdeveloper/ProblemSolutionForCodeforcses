#include<stdio.h> //| \n
#include<math.h>
#define MOD 1000000007;
int main()
{

    int n,i;
    scanf("%d",&n);
    long long answer=1;
    for (int i = 0; i < n; i++) {
        answer *= 2;
        answer = answer%MOD;
    }
    printf("%lld\n",answer);

}
