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
    int t;
    cin>>t;

    while(t--) {
        int n,b;
        cin>>n;

        b = n * ( n - 1) / 2;

        vector<int>v(b);

        for( int i = 0; i < b; i++ ) {
            cin>>v[i];
        }

        sort(v.begin(),v.end());


       for ( int i = 0; i < b; i += --n ) {
           cout<<v[i]<< " ";
       }

       cout<<"1000000000"<<endl;

    }


}





