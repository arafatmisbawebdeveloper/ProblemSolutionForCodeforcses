#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    stack<int> st;

    for(int i = n-1; i >= 0; i--){

        while(!st.empty() && a[i] > a[st.top()]){
            st.pop();
        }
        st.push(i);
    }

    cout << st.size() << endl;
}

int32_t main(){
    optimize();
    int tc;
    cin >> tc;
    while(tc--) solve();
}
