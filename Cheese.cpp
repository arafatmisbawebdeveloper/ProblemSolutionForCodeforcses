#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
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
    ll n,w;
    cin>>n>>w;
    vector<pair<ll,ll>>q(n);

    for(int i=0;i<n;i++) {
        cin>> q[i].first >> q[i].second;
    }

    sort(q.begin(),q.end(),cmp);

    ll test = 0,weight = 0;

    for ( int i = 0; i < n; i++ ) {
        test += q[i].first * min(w,q[i].second);
        w -= min(w,q[i].second);
    }
    cout<<test<<endl;



}





