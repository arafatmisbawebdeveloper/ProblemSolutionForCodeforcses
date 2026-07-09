#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n,k;
    cin>>n>>k;
    ll sum = 0;
    vector<int>v(n);
    for  (int i = 0; i < n; i++ ) {
        cin>>v[i];
        sum += v[i];
    }
    sort(v.begin(),v.end());
    int cnt = 0;
    for( int i = 1; i < n; i++ ) {
        if ( v[i] - v[0] > k ) cnt++;
    }
    if ( v[n-1] - v[0]-1 > k OR cnt > 1 ) {
        cout<<"Jerry"<<endl;
        return;
    }
    if ( sum % 2 ) cout<<"Tom"<<endl;
    else cout<<"Jerry"<<endl;
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while (tc--) solve();

}





