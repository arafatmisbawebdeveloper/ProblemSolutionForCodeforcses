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
    int n;
    cin>>n;

    vector<int>v(n);
    vector<int>sum(n+1);

    for ( int i = 0; i < n; i++ ) cin>>v[i];

    sort(v.begin(),v.end());

    for (int i = 1; i <= n; i++ ) {
        sum[i] = sum[i-1] + v[i-1];
    }

    int ans = 0;
    bool done = false;

    for( int i = n; i >= 0; i-- ) {

        for ( int j = n ;j >= 0; j-- ) {

                if( sum[i] - sum[j] > sum[j]) {
                ans = i - j;
                done = true;

            }

               if( done == true ) break;

        }

    }

   cout<<ans<<endl;

}





