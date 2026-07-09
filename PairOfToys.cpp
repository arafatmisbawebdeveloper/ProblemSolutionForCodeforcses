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
    ll n,k;
    cin>>n>>k;

    if ( n >= k ) cout<< k/2 << endl;

    else {
        cout<< n / ( k - n + 1) << endl;
    }


}





