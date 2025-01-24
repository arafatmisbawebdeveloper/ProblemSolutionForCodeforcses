#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

int main()
{
    optimize();

    int m,n;
    cin>>m>>n;
    priority_queue<int>q;

    for(int i=0;i<m;i++) {
        int a;
        cin>>a;
        q.push(a);
    }

    long long ans=0;

    for(int i=0;i<n;i++) {
        if(!q.empty()) {
            int a=q.top();
             q.pop();

        ans+=a;
        a--;
        if(a>0)
        q.push(a);
        }

    }
    cout<<ans<<endl;

}





