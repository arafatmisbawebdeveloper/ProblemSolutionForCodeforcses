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

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int result = 1;
    int last = a[0];

    for(int i = 1; i < n; i++){
        if(a[i] > a[i-1]+1 or a[i] <= last){
            last = a[i];
            result++;
        }
    }
    cout<<result<<endl;
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
