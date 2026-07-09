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

        int sum=0;
      for(int i=1;i<=n;i++)
      {
        sum += abs(n-i);
        n--;
      }
      cout<<sum+1<<endl;
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





