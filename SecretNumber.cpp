#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    ll n;
    cin>>n;

    vector<ll> results;
    for(ll i=1; i<=18; i++){
        ll fact = 1;
        for(ll j=0; j<i; j++){
            fact *= 10;
        }
        fact += 1;
        if(fact > n) break;
        ll x = n/fact;
        if(x * fact == n){
            results.push_back(x);
        }
    }
    sort(results.begin(), results.end());

    ll cnt = results.size();
    cout<<cnt<<endl;

    for(ll i=0; i<cnt; i++){
        cout<<results[i]<<" ";
    }
    if(cnt) cout<<endl;
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }

}





