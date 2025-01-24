#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int &x : a) cin >> x;

    sort(a.begin(), a.end(), [](int x, int y) {
      return x % 2 < y % 2;
    });

    int ans = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {
        ans += __gcd(a[i], a[j] * 2) > 1;
      }
    }
    cout << ans << endl;


}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while( tc -- ) {
        solve();
    }
}





