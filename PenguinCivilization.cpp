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

        int m = 1 << n;

//        vector<pair<int, int>> vp(m);
//            for(int i=0; i<m; i++){
//                vp[i] = {-__builtin_ctz(~i), i};
//            }
//            sort(vp.begin(), vp.end());
//            for(int i=0; i<m; i++){
//                cout<<vp[i].second<<" ";
//            }
//            cout<<endl;

         vector<int> p(m);

        for (int i = 0; i < m; i++) {
            p[i] = i;
        }

        sort(p.begin(), p.end(), [](int a, int b) {
            int pa = __builtin_ctz(~a);
            int pb = __builtin_ctz(~b);
            if (pa != pb) return -pa < -pb;
            return a < b;
        });

        for (int i = 0; i < m; i++) {
            cout << p[i] << " ";
        }
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
