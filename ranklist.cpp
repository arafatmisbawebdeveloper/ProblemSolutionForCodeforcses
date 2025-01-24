#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef double dl;
typedef long long ll;

bool cmp(const pair<int,int> &p1,const pair<int,int> &p2)
{
    if(p1.first > p2.first) return 1;
    else if(p1.first==p2.first) return (p1.second < p2.second);
    else return 0;
}

int main()
{
    optimize();
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>q(n);

    for(int i=0;i<n;i++) {
        cin>> q[i].first >> q[i].second;
    }

    sort(q.begin(),q.end(),cmp);

    int ans=0;

   for(auto u:q) {
    if(u==q[k-1]) ans++;
   }

   cout<<ans<<endl;
}
