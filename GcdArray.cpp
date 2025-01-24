#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

//const ll mx =  1e8 + 123;
//ll isPrime[mx];
//vector<ll>primes;
//
//void primeGen( ll mx )
//{
//    for( ll i = 3; i <= mx; i+=2 ) isPrime[i] = 1;
//
//    ll sq = sqrt(mx);
//
//    for( ll i = 3; i <=sq ; i+=2 ) {
//            if( isPrime[i]) {
//                for( ll j = i * i; j <= mx; j+=i ) {
//                       isPrime[j] = 0;
//                }
//            }
//    }
//
//    isPrime[2] = 1;
//    primes.push_back(2);
//
//    for(ll i = 3; i <= mx; i+=2 ) {
//        if( isPrime[i] == 1) primes.push_back(i);
//    }
//
//
//}
//
//void solve()
//{
//    ll l,r,k;
//    cin>>l>>r>>k;
//
//    ll cnt = 0;
//
//    for ( ll i = l; i <= r; i++ ){
//        if ( isPrime[i] == 1 ) cnt++;
//    }
//
//    if ((l == 1)&&(r == 1) ) cout<<"NO"<<endl;
//    else if ( cnt <= k OR (l == r ) ) cout<<"YES"<<endl;
//
//
//    else cout<<"NO"<<endl;
//
//    //cout<<"There is "<<cnt<<" Prime in the range"<<endl;
//}
//
//int main()
//{
//    optimize();
//    int tc;
//    cin>>tc;
//
//    primeGen(mx);
//
//    while(tc--) {
//        solve();
//    }
//
//}
int main()
{
    int tc;
    cin>>tc;

    while(tc--) {
    ll l,r,k;
    cin>>l>>r>>k;

    ll res = ( r - l) / 2;

    if ( r % 2 == 1 OR l % 2 == 1 ) res++;

    if ( k == 0 ) {
        if ( r != 1 && l != 1 && (r==l)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        continue;
    }

        if(res<=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}






