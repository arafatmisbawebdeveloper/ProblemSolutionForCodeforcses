#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
typedef double dl;
typedef long long ll;

ll lcm_ll(ll a, ll b){
    return a / __gcd(a,b) * b;
}

void solve()
{
    ll a,b,c,m;
    cin>>a>>b>>c>>m;

    ll A = m/a;
    ll B = m/b;
    ll C = m/c;

    ll ab = lcm_ll(a,b);
    ll ac = lcm_ll(a,c);
    ll bc = lcm_ll(b,c);
    ll abc = lcm_ll(ab,c);

    ll AB = m/ab;
    ll AC = m/ac;
    ll BC = m/bc;
    ll ABC = m/abc;

    ll onlyA = A - AB - AC + ABC;
    ll onlyB = B - AB - BC + ABC;
    ll onlyC = C - AC - BC + ABC;

    ll ABonly = AB - ABC;
    ll AConly = AC - ABC;
    ll BConly = BC - ABC;

    ll alice = 6*onlyA + 3*ABonly + 3*AConly + 2*ABC;
    ll bob   = 6*onlyB + 3*ABonly + 3*BConly + 2*ABC;
    ll carol = 6*onlyC + 3*AConly + 3*BConly + 2*ABC;

    cout<<alice<<" "<<bob<<" "<<carol<<endl;
}

int32_t main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
}
