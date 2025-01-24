#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

int main()
{
    optimize();
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    stack<int>st;
    vector<int>v;
    for ( int i = 0; i < s.size(); i++ ) {
        if ( s[i] == '(' ) st.push(i);
        if ( s[i] == ')' && !st.empty()) {
            v.push_back(st.top());
            v.push_back(i);
            st.pop();
        }
        if ( v.size() == k ) break;
    }

    int cnt = 0;
    sort(v.begin(),v.end());
    for ( auto u:v ) {
        cnt++;
        cout<<s[u];
        if ( cnt == k ) break;
    }

}




