#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 123;
int a[mx];
int sum[mx];

int main()
{
    optimize();
    int T;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;

        for(int i = 0; i < n; i++) cin>>a[i];
        for(int i = 1; i <= n; i++) sum[i] = sum [i-1] + a[i-1];

        int ans= 0,cnt = 0;

        for(int l = n; l>=0; l--) {
            for(int r = l; r >= 0; r--) {
                if(sum[l]-sum[r] == 0) {
                    cnt = l - r;
                    ans = max(cnt,ans);
                }
            }
        }

        cout<<ans<<endl;
    }


}





