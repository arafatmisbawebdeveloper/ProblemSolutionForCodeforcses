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
    cin>>n;
    int a[n+1];
    vector<int>ans;

    for ( int i = 0; i < n; i++ ) cin>>a[i];

    int lastElmntToBreak=n;
    for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1]){
            lastElmntToBreak=i;
        }
    }
    if(lastElmntToBreak==n){
        cout<<"YES"<<endl;
        return;
    }
    for ( int i = 0; i <= lastElmntToBreak; i++ ) {
        if ( a[i] < 10) ans.push_back(a[i]);
        else {
            string st = to_string(a[i]);
            for ( int i = 0; i < st.size(); i++ ) {
                    int b = st[i]-'0';
                    ans.push_back(b);
            }

        }
    }
    for(int i=lastElmntToBreak+1; i<n; i++){
        ans.push_back(a[i]);
    }
    bool flag = 1;
    for ( int i = 0; i < ans.size()-1; i++ ) {
        if (ans[i] > ans[i+1] ) {
            flag = 0;
            break;
        }
    }
//     for ( int i = 0; i < ans.size(); i++ ) cout<<ans[i]<<" ";
//     cout<<endl;

    if ( flag ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while ( tc-- ) {
        solve();
    }
}





