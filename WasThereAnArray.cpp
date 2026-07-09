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
    vector<int> b(n-2);
    for(int i = 0; i < n-2; i++){
        cin >> b[i];
    }

    bool ok = true;
    for(int i = 0; i + 2 < b.size(); i++){
        if(b[i] == 1 && b[i+1] == 0 && b[i+2] == 1){
            ok = false;
            break;
        }
    }

    if(ok) cout << "YES\n";
    else cout << "NO\n";
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
