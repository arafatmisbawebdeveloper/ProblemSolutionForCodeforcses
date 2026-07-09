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
    vector<ll>v(n);

    for ( int i = 0; i < n; i++ ) cin>>v[i];

    sort(v.begin(),v.end());

    ll mn = v[0];

    for ( int i = 1; i < n; i++ ) mn = min(mn,abs(v[i]-v[i-1]));

    if ( k == 1) cout<<mn<<endl;
    else if ( k > 2 ) cout<<0<<endl;
    else {
        for ( int i = 0; i < n-1; i++ ) {
            for ( int j = i+1; j < n; j++ ) {
                ll tmp = abs(v[j]-v[i]);
                mn = min(mn,tmp);
                ll indx = -1;
                ll low = 0;
                ll high = n-1;
                while ( low <= high ) {
                    ll mid = (low+high) / 2;
                    if ( v[mid] >= tmp ) {
                            indx = mid;
                        high = mid -1;
                    }
                    else {
                        low = mid + 1;
                    }
                }
                if ( indx == -1 ) {
                    mn = min(mn,tmp - v[n-1]);
                }
                else {
                    mn = min(mn,v[indx] - tmp);
                }
                if ( indx == 0 ) {
                    mn = min(mn,v[0]-tmp);
                }
                else {
                    mn = min(mn,abs(tmp-v[indx-1]));
                }
            }
        }
        cout<<mn<<endl;
    }

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





