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

    for(int i=0;i<n;i++) cin>>a[i];
    priority_queue<int>pq;

    for(int i=0;i<n;i++) {
        pq.push(a[i]);

        if(pq.size()>=3) {
            int a1=pq.top();
            pq.pop();

            int a2=pq.top();
            pq.pop();

            int a3=pq.top();
            pq.pop();

            cout<<1ll*a1*a2*a3<<endl;

            pq.push(a1);
             pq.push(a2);
              pq.push(a3);
        }

        else cout<<-1<<endl;
    }


}





