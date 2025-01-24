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
    int T;
    cin>>T;

    while(T--) {
        int n,k;
        cin>>n>>k;

        vector<int>a(n);

        for( int i = 0; i < n; ++i ) cin>>a[i];
        sort(a.begin(),a.end());

        int ans = 1,cnt = 1;

        for( int i = 0; i < n-1; i++ ) {
            if( a[i+1] - a[i] > k ) {
                cnt = 1;
            }
            else {
                cnt++;
            }

            ans = max(cnt,ans);

        }

        cout<< n - ans <<endl;

    }

}





