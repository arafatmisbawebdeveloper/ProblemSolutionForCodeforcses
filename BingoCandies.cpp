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

    unordered_map<int,int> freq;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            freq[x]++;
        }
    }

    for(auto &p : freq){
        if(p.second > n*(n-1)){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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
