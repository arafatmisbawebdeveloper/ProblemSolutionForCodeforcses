#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int a, b, c;
        cin >> a >> b >> c;
        int total = a + b + c;
        if (total % 3 != 0) {
            cout << "NO\n";
        } else {
            int x = total / 3;
            if (x < b) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while( tc-- ) {
        solve();
    }

}





