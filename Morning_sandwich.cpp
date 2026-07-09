#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

int main()
{
    optimize();
    int T;
    cin>>T;

    while(T--) {
        int b,c,h;
        cin>>b>>c>>h;

         int layer = c+h;
        int ans = 0;

        while( b!=0 && layer!= 0) {

                layer--;
                b--;
                ans+=2;
        }

        if( b != 0 ) cout<<ans+1<<endl;
        else
        cout<<ans-1<<endl;
    }

}





