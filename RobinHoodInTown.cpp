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
    int tc;
    cin>>tc;
    while( tc-- ) {
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll avg = 0,sm = 0,mx = 0,nd = 0;

        ll mhf = (n/2) + 1;

        for ( int i = 0; i < n; i++ ) {
            cin>>v[i];
            sm += v[i];
        }

         if ( n == 1 OR n == 2 ) {
            cout<<-1<<endl;
            continue;
        }


         avg = ceil((sm*1.0)/ (n * 2));

        sort(v.begin(),v.end());

         mx = v[mhf-1];
//        cout<<"mhf value is "<<mx<<endl;
//        cout<<"average is "<<avg<<endl;

        if ( avg > mx ) {
            cout<<0<<endl;
        }
        else {
             nd = ((mx*2) * n) - sm ;
            cout<<nd+1<<endl;
        }
    }

}





