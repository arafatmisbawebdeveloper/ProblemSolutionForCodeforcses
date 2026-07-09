#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


void solve()
{
    int n,k,a[100005];
    cin >> n >> k;
	for(int i=0;i<n;i++) cin >> a[i];
	int t=a[k-1];
	sort(a+0,a+n);
	for(int i=0;i<n-1;i++){
		if(a[i]<t)continue;
		if(a[i+1]-a[i]>t){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) solve();

}





