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
        vector<int> a(n), b(n);

        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;


       int xorA = 0, xorB = 0;
        for (int x : a) xorA ^= x;
        for (int x : b) xorB ^= x;

        for (int i = 0; i < n; i++) {
            int pos = i + 1;

            if (a[i] == b[i]) continue;


            int curA = xorA;
            int curB = xorB;


            int newA = xorA ^ a[i] ^ b[i];
            int newB = xorB ^ b[i] ^ a[i];

            if (pos % 2 == 1) {

                if ((newA % 2 == 1) && (curA % 2 == 0)) {

                    xorA = newA;
                    xorB = newB;
                    swap(a[i], b[i]);
                }

            }
            else {

                if ((newB % 2 == 1) && (curB % 2 == 0)) {
                    xorA = newA;
                    xorB = newB;
                    swap(a[i], b[i]);
                }
            }
        }

        if (xorA > xorB) cout << "Ajisai"<<endl;
        else if (xorB > xorA) cout << "Mai"<<endl;
        else cout << "Tie"<<endl;
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
