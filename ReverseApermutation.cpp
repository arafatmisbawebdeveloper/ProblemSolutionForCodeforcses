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
    vector<int> a(n);
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        m[a[i]] = i;
    }
    for(int i = 0; i < n; i++){
        if(a[i] != n - i){
        reverse(a.begin() + i, a.begin() + m[n - i] + 1);
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " \n"[i + 1 == n];
    }
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
