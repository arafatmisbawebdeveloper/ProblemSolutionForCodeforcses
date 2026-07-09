#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

int const mx = 1e5+124;
int d[mx];

void PrimeFactorization(int n){
    int i = 2;
    if(n==1 || n==0)
        printf("No prime factors available\n");
    while(n>1){
//          if(d[i]==0){
            while(n%i==0){
                printf("%d",i);
                if(n>i) printf("*");
                else printf("\n");
                n/=i;
            }
        i++;
//        }
//        else i++;
    }
}

int main()
{
    optimize();
     PrimeFactorization(1020);
    printf("\n");

}





