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
    string s;
    cin>>s;
    int ans = n;

    if(s[0]=='1') ans++;
    for(int i=1; i<n; i++){
        if(s[i]!=s[i-1]) ans++;
    }
    bool f1 = false, f2 = false;
    for(int i=1; i<n; i++){
        if(!f1 and s[i-1]=='1' and s[i]=='0') f1=true;
        if(f1 and s[i-1]=='0' and s[i]=='1') f2 = true;
    }
    if(f1) ans--;
    if(f2) ans--;
    cout<<ans<<endl;
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





