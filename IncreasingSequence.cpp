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

    while ( tc-- ) {
        int n;
        cin>>n;
        ll a[n];

        for ( int i = 0; i < n; i++ ) cin>>a[i];

//        vector<ll>b;
//
//        for ( ll i = 1,j = 0; ; ) {
//            if ( a[j] == i ) i++;
//            else {
//                b.push_back(i);
//                i++;
//                j++;
//            }
//
//            if ( j >= n) break;
//        }
//
//        cout<<b[b.size()-1]<<endl;

         ll ans = a[0] + 1;
         if ( a[0] > 1 ) ans = 1;

         ll i = 1;

         while ( i < n ) {
            if ( ans + 1 == a[i]) {
                ans += 2;
            }
            else {
                ans++;
            }
            i++;
         }

         cout<<ans<<endl;
    }

}





