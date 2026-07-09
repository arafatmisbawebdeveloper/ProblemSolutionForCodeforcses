#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

ll lcm ( ll a, ll b )
{
    ll l = a * b / __gcd(a,b);
    return l;
}

//const int mx =  1e6 + 123;
//bitset<mx>isPrime;
//vector<int>primes;

//void primeGen( ll n )
//{
//    for ( int i = 3; i <= n/2; i+=2 ) isPrime[i] = 1;
//
//    int sq = sqrt(n);
//
//    for ( int i = 3; i <=sq ; i+=2 ) {
//            if( isPrime[i]) {
//                for( int j = i * i; j <= n; j+=i ) {
//                     isPrime[j] = 0;
//                }
//            }
//    }
//
//    isPrime[2] = 1;
//    primes.push_back(2);
//
//    for (int i = 3; i <= n; i+=2 ) {
//        if ( isPrime[i] == 1) primes.push_back(i);
//    }
//
//
//}
//
//vector<int> PrimeFactor ( ll n )
//{
//    vector<int> factors;
//
//    for ( auto u:primes ) {
//        if ( 1ll * u * u > n ) break;
//
//        if ( n % u == 0 ) {
//            while( n % u == 0 ) {
//                factors.push_back(u);
//                n/=u;
//            }
//        }
//
//    }
//
//    if( n > 1 ) {
//        factors.push_back(n);
//    }
//
//    return factors;
//}
//
//
//
//int main()
//{
//    optimize();
//      int lim = 1e6;
//      primeGen(lim);
//
//      ll n;
//      cin>>n;
//
//      vector <int> factor = PrimeFactor ( n );
//
////      for ( auto p:factor ) cout<<p<<" ";
////      cout<<endl;
//
//      ll sz = factor.size()/2;
//      ll a = 1, b = 1;
//
//
//        for( ll i = 0; i < sz; i++ ) a*=factor[i];
//        for( ll i = sz ; i < factor.size(); i++ ) b*=factor[i];
//
//        if ( a * b != n ) {
//            a = n / (a*b);
//        }
//        ll m = lcm( a , b ) ;
//        if ( m != n ) {
//            a*=n/m;
//        }
//
//       cout<<a<<" "<<b<<endl;
//      //cout<<sz<<" "<<sz+1<<" "<<factor.size()<<endl;
//
//
//}

int main()
{
    ll n;
    cin>>n;
    ll x,y;
    for ( ll i = 1; i*i <=n; i++ ) {
        if ( n % i == 0 ) {
            if ( lcm ( i , n/i ) == n ) {
                    x = i;
                    y = n/i;
                }
            }
        }

        cout<<x<<" "<<y<<endl;

}



