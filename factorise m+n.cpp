#include<bits/stdc++.h>
using namespace std;
const long long MAX  = 1e6+123;
long long p[MAX]= {0};
void sieve()
{
    for(int i=2; i*i<=MAX; i++)
    {
        if(p[i]==0)
        {
            for(int j=i*i; j<=MAX; j+=i)
                p[j]=1;
        }
    }
}
int query()
{
    long long n;
    cin>>n;
    for(int i=2; i<=MAX; i++)
    {
        long long add=i+n;
        if(p[add]!=0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}

int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--)
        query();
}
