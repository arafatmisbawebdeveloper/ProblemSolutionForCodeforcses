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
        int n;
        cin>>n;
        vector<int>v(n);

        for  ( int i = 0; i < n; i++ ) cin>>v[i];

        sort(v.begin(),v.end());

        int ans1 = 0, ans2 = 0;

        for( int i = 0; i < n/2; i++ ) ans1+= v[i];
        for( int i = n/2; i < n; i++ ) ans2 += v[i];

        if( ( ans1%2 == 0 && ans2 % 2 == 0) OR (ans1 % 2 == 1 && ans2 % 2 == 1) ) {
            cout<<"YES"<<endl;
        }
        else
            cout<< "NO" <<endl;

    }

}





