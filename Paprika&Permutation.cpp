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
        set<int> st;
        for(int i = 1; i <= n; i++){
                st.insert(i);
        }
        vector<int> rem;
        for(int i = 0; i < n; i++){
            int v;
            cin >> v;
            if(st.find(v)!=st.end()){
                    st.erase(v);
            }
            else {
              rem.push_back(v);
            }
        }
        sort(rem.begin(),rem.end());
        reverse(rem.begin(),rem.end());

        bool flag = false;
        for(auto &nx : rem){
            auto it = st.end();
            it--;
            int cur = (*it);
            if(cur>(nx-1)/2){
                flag=true;
                break;
            }
            st.erase(it);
        }
        if(flag) cout << "-1"<<endl;
        else cout << rem.size() << endl;
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
