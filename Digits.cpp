#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
      ll n, d;
    cin >> n >> d;

    vector<ll> va = {1};
    if (d == 3 or d == 6 or d == 9 or n > 2)
        va.push_back(3);
    if (d == 5)
        va.push_back(5);
    if (d == 7 or n > 2)
        va.push_back(7);
    if (d == 9 or n > 5 or (n > 2 and (d == 3 or d == 6)))
        va.push_back(9);
    sort(va.begin(),va.end());
    for (auto &i : va)
        cout << i << " ";

    cout<<endl;
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
