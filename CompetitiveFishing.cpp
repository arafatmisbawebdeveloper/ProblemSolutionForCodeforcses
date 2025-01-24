#include<bits/stdc++.h>
#define int long long
using namespace std;
int T,n,k,ans,sum,orz;
string a;
priority_queue<int>q;

void solve(){
    ans=sum=orz=0;
    while(!q.empty()) q.pop();

    cin>>n>>k;
    cin>>a;
    a=" "+a;

    for(int i=n;i>=2;i--){
        if(a[i]=='1')sum++;
         else sum--;
         q.push(sum);
    }
    while(!q.empty()){
        int t = q.top();
          q.pop();
        ans += t,orz++;
       if(ans>=k){
        cout<<orz+1<<"\n";
        return ;
      }
    }
    cout<<"-1\n";
 }

 signed main(){
     cin>>T;
     while(T--)
        solve();
     return 0;
  }



#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n,k,sum,ct,ans,cnt[2],a[200005];
string s;
signed main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>s;s="%"+s;
		cnt[0]=cnt[1]=sum=ct=0;
		ans=-2;
		for(int i=n;i>=2;i--)
		{
			cnt[s[i]-'0']++;
			a[i]=cnt[1]-cnt[0];
		}
		sort(a+2,a+n+1);
		for(int i=n;i>=2;i--)
		{
			if(a[i]<=0)break;
			sum+=a[i];ct++;
			if(sum>=k){ans=ct;break;}
		}
		cout<<ans+1<<'\n';
	}
}
