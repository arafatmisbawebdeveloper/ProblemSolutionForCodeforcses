#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n, x;
        cin >> n >> x;
        vector<int> p;
        if (x == 0) {
            for (int i = 1; i < n; ++i) {
                p.push_back(i);
            }
            p.push_back(0);
        } else if (x == n) {
            for (int i = 0; i < n; ++i) {
                p.push_back(i);
            }
        } else {
            for (int i = 0; i < x; ++i) {
                p.push_back(i);
            }
            for (int i = x + 1; i < n; ++i) {
                p.push_back(i);
            }
            p.push_back(x);
        }
        for (int i = 0; i < n; ++i) {
            cout << p[i] << " ";
        }
        cout << endl;
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





