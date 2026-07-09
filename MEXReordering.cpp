#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

int MEX(vector<int>&a,int start, int end){
    int mex=0;
    set<int>s;
    for(int i = start; i <= end; i++){
        s.insert(a[i]);
    }
    while(s.count(mex))mex++;
    return mex;
}
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a.begin(),a.end());

    for( int i = 0; i < n; i++){
        int pre = MEX(a,0,i);
        int suf = MEX(a,i+1,n-1);
        if(pre == suf){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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
