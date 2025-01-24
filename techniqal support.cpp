#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef double dl;
typedef long long ll;

int main()
{
    int t;
    scanf("%d",&t);

    while(t--) {
            int n,a=0;
            scanf("%d ",&n);
            char s[500];

               for(int i=0;i<n;i++) {
                scanf(" %c",&s[i]);

           if(s[i]=='Q') a++;
            else  a--;
            if(a<0) a=0;
            }

            if(a==0 ) printf("Yes\n");
            else printf("No\n");

    }


    return 0;
}






