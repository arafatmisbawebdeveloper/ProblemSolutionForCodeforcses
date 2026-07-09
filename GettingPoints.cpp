#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve( )
{
    ll n,p,l,t;
        cin>>n>>p>>l>>t;

        ll task,sum,ans;
         task = ( n - 1) / 7 + 1;


// TLE
//         while ( n-- ) {
//            tp += l;
//            ls--;
//            if ( task >= 2 ) {
//                tp += t*2;
//                task = task -2;
//            }
//            else if ( task == 1 ){
//                       tp += t;
//                       task--;
//            }
//            if ( tp >= p ) {
//                 cout<<n<<endl;
//                return;
//            }
//
//         }

            sum = ((task-1) / 2 + 1) * l + task * t;
            if ( sum < p ) ans = ((task-1) / 2 + 1) + ( p - sum - 1)/l + 1;
            else ans = (p - 1) / (l + 2*t ) + 1;

            cout<<n-ans<<endl;

    }


int main()
{
    optimize();
    int tc;
    cin>>tc;

    while( tc-- ) {
        solve();
    }


}





