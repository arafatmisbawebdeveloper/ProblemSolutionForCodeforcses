#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 1e5+123;
int a[mx];

int main()
{
    optimize();
    int n;
    cin>>n;
    ll ans=0;
    priority_queue<int,vector<int>,greater<int>>q;

    for(int i=0;i<n;i++) {
            cin>>a[i];
          q.push(a[i]);
    }

    while(q.size()>1) {
        int a1 = q.top();
        q.pop();

        int a2 = q.top();
        q.pop();

        ans=ans+a1+a2;
        q.push(a1+a2);

    }

    cout<<ans<<endl;

}





