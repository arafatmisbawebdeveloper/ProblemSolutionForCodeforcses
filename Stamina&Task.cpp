#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
typedef double dl;
typedef long long ll;

void solve()
{
    int n;
    cin>>n;

    vector<double> c(n), p(n);

    for(int i=0; i<n; i++){
        cin>>c[i]>>p[i];
    }
    reverse(c.begin(), c.end());
    reverse(p.begin(), p.end());

    double result = c[0];
    for(int i=1; i<n; i++){
        double tmp = c[i] + (result * (100 - p[i])/100);
        result = max(result, tmp);
    }
    cout<<setprecision(10)<<fixed<<result<<endl;
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
