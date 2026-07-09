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

    while( t-- ) {

        int n;
        cin>>n;

        vector<int> v(n);

        for ( int i = 0; i < n; i++ ) cin>>v[i];

       sort( v.begin(),v.end());

       if ( v.front() == v.back() ) cout<<-1<<endl;

     else {

         int mid = 0;

       for ( int i = 0; i < n; i++ ) {
          if ( v[i] == v[0]) mid++;
       }

       cout<< mid << " "<< n - mid<<endl;

      for ( int i = 0; i < mid; i++ ) cout<<v[i]<< " ";
      cout<<endl;

      for ( int i = mid; i < n; i++ ) cout<<v[i]<< " ";
      cout<<endl;


     }

   }

}





