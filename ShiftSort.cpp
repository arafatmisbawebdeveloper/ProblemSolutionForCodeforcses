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
        string s;
        cin>>n>>s;
		string t=s;

		sort(s.begin(),s.end());

		int ans=0;
		for(int i=0;i<n;i++)ans+=s[i]!=t[i];
		cout<<ans/2<<endl;
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }

}





