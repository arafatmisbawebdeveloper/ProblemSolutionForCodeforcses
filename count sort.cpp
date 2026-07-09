//ID :21701033
//Name : Misba Ul Hoque Arafat

#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void countsort(int a[],int n,int mx)
{

    int count[mx+1]={0},b[n];

    for(int i=0;i<n;i++) {
        count[a[i]]++;
    }

    for(int i=1;i<=mx ;i++) {
        count[i]=count[i]+count[i-1];
    }

    for(int i=n-1;i>=0;i--) {
        b[--count[a[i]]]=a[i];
    }
    for(int i=0;i<n;i++) {
        a[i]=b[i];
    }
}

int main()
{
    optimize();
    int n;
    cin>>n;
    int a[n],mx=0;
   for(int i=0;i<n;i++) {
        cin>>a[i];
         mx=max(a[i],mx);
   }
    countsort(a,n,mx);
    for(int i=0;i<n;i++) cout<<a[i]<<" "<<endl;


}





