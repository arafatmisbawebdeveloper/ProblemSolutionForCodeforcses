#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;


int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {

        int n;
        cin>>n;
        long long cnt0=0,cnt1=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();++i) {
           if(s[i]=='1') {
            cnt1++;
           }
           else if(s[i]=='0') {
                cnt0++;
           }
        }
        long long ans =( cnt1 * cnt0 *1ll);
        long long a=1;
        for(int i=1;i<=n;++i) {
            if(s[i]==s[i-1]) {
                a++;
            }
            else {
                ans=max(ans,1ll*a*a);
                a=1;
            }
        }

        ans=max(1ll*ans,a*a);
        cout<<ans<<endl;
    }
}





