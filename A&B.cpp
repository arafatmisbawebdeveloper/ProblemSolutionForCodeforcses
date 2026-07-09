#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

ll func(int n,string s, char c){
    vector<int>p;
    for(int i=0;i<n;i++){
      if(s[i]==c)p.push_back(i);
    }
    int m=p.size();
    if(m<=1)return 0;
    int mid=p[m/2];
    ll cost=0;
    for(int i=0;i<m;i++){
        cost+=llabs(p[i]-(mid+(i-m/2)));
    }
    return cost;
}
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    ll ans=min(func(n,s,'a'),func(n,s,'b'));
    cout<<ans<<endl;
}


int main() {
    optimize();
    int t = 1;
   cin >> t;
    while (t--)
        solve();
    return 0;
}





