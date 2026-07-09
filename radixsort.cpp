#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


void countsort(int a[],int n,int pos)
{
    int count[10]={0};
    int b[n];

    for(int i=0;i<n;i++) {
        count[(a[i]/pos)%10]++;
    }

    for(int i=1;i<=9;i++) {
        count[i]=count[i]+count[i-1];
    }

    for(int i=n-1;i>=0;i--) {
        b[--count[(a[i]/pos)%10]]=a[i];
    }

     for(int i=0;i<n;i++) {
        a[i]=b[i];
    }

}

int radixsort(int a[],int n,int mx)
{

    for(int pos=1;mx/pos>0;pos=pos*10) {
        countsort(a,n,pos);
    }
}

int main()
{
    optimize();
    int n,mx=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        mx = max(mx,a[i]);
    }
    radixsort(a,n,mx);

    cout<<"mx"<<" "<<mx<<endl;
    cout<<"N"<<" "<<n<<endl;

    for(int i=0;i<n;i++) cout<<a[i]<<" "<<endl;
}





