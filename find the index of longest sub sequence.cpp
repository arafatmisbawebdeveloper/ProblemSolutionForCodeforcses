#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 2e5+123;
ll a[mx];
ll sum[mx];

int main()
{
    optimize();
    int n,x,k=0,b=0;
    cin>>n>>x;

    for(int i=0;i<n;i++) cin>>a[i];
    map<ll,int>cnt;
    map<ll,int>mp;

    cnt[0]++;
    //ll ans = 0;

    for(int i = 1;i<=n;i++) {
        sum[i] = sum[i-1] + a[i-1];
        cnt[sum[i]]++;
        mp[sum[i]] = i;
    }

    for(int i = n;i>=1;i--) {
        //cnt[sum[i]]--;
        ll sub = sum[i] - x;
        //ans+=cnt[sub];
        if(cnt.find(sub)!= cnt.end()) {
             k = mp[sub]  ;
            b = i - 1 ;

        }


    }
  cout<<"index "<<k <<" "<<b<<endl;

}







