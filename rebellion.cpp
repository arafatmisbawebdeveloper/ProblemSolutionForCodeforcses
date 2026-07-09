#include<bits/stdc++.h> // |
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef double dl;
typedef long long ll;

const int MAX = 1e5+123;
int a[MAX];

int main()
{
    optimize();
    int t;
    cin>>t;

    while(t--) {

     int n,c=0;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    //sort(a,a+n);
    for(int i=0,j=(n-1); i<j; i++) {
                                                  /*11
                                                  1 1 0 0 1 0 0 1 1 1 0 */
        if(a[i]==1) {

            for(;i<j; j--) {

                if(a[j]==0)
                {
                    a[i]=0;
                    a[j]=1;
                    c++;
                    break;
                }
            }
        }
    }
    cout<<c<<endl;
}

}



