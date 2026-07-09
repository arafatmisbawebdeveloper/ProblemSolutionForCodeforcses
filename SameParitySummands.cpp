#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
     ll n, k;
        cin >> n >> k;
        int n1 = n - (k - 1);
        if (n1 > 0 and n1 % 2 == 1)
        {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; ++i)

                cout << "1 ";
            cout << n1 << endl;
            return;
        }
        int n2 = n - 2 * (k - 1);
        if (n2 > 0 and n2 % 2 == 0)
        {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; i++)
                cout << "2 ";
            cout << n2 << endl;
            return;
        }
        cout << "NO" << endl;
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
