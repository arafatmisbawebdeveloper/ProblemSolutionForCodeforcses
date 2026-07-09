#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
typedef double dl;
typedef long long ll;

void solve()
{
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<char> st;
        for (char c : s) {
            if (!st.empty() && st.back() == c)
                st.pop_back();
            else
                st.push_back(c);
        }

        cout << (st.empty() ? "YES" : "NO")<<endl;
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
