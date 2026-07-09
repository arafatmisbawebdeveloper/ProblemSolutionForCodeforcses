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

    vector<int> a(n), b(n);
    int mx = 0;
    int mn = 1e9+7;
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i] = a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }

    sort(b.begin(), b.end());
    bool sorted = true;

    for(int i=0; i<n; i++){
        if(a[i] != b[i])
            sorted = false;
    }
    if(sorted){
        cout<<-1<<endl;
        return;
    }

    int result = mx;
    for(int i=0; i<n; i++){
        if(a[i] != b[i])
            result = min(result, max(abs(a[i] - mn), abs(mx - a[i])));
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
