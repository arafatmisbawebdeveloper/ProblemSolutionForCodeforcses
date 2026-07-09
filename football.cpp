#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 1e3 + 123;
int f[mx];
int s[mx];


int main()
{
     optimize();

         int n,a,b;
        cin>>n>>a>>b;

        if(n==1 && (a==b)) {
              cout<<1<<endl;
              cout<<a<<":"<<b<<endl;
        }
        else if( n==1 && (a!=b) ) {
            cout<<0<<endl;
            cout<<a<<":"<<b<<endl;
        }


        else if(n<=(a+b)) {
            cout<<0<<endl;
            for(int i=1;i<=n;i++) {
                if(a>0) {
                    f[i] = 1;
                    a = a - 1;
                }
                else if(a==0 && b!=0) {
                    s[i] = 1;
                    b = b - 1;
                }

            }
            if( a OR b ) {
                f[1] += a;
                s[n] += b;
            }
            for( int j = 1; j <= n; j++ )

              cout<<f[j]<<':'<<s[j]<<endl;
        }


        else {
            cout<< n - (a+b) <<endl;
            for(int i = 0;i<n-(a+b);i++) {
                    cout<<0<<':'<<0<<endl;
                 }

                 int pos = 1;
                 int score = a + b;

                 while(pos <= score) {
                        pos++;
                    if(a) {
                        cout<<1<<':'<<0<<endl;
                        a = a - 1;
                    }
                    if(b) {
                         cout<<0<<':'<<1<<endl;
                         b = b - 1;
                    }
                 }

        }

}









