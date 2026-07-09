#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


void solve()
{
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
     ll s = a + b + c;
    if (n <= s) {

        if (n <= a) {
            cout<< 1<<endl;
            return;
        }
        if (n <= a + b) {
            cout<< 2<<endl;
            return;
        }
        else cout<< 3<<endl;
        return;
    }


     ll full_cycles = (n - 1) / s;
    ll total_walked = full_cycles * s;
    ll remaining = n - total_walked;

    // Simulate the remaining part
    if (remaining <= a) {
        cout<< full_cycles * 3 + 1<<endl;
        return;
    }
    if (remaining <= a + b) {
        cout<< full_cycles * 3 + 2<<endl;
        return;
    }
    else {
        cout<< full_cycles * 3 + 3<<endl;
        return;
    }
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while (tc--) {
        solve();
    }

}





