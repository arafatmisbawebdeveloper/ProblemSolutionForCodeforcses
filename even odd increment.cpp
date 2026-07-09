#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx=1e5+123;
int ar[mx];


void solve()
{
    int n,q;
    cin>>n>>q;
    ll sum=0;
    for(int i=0;i<n;i++) {
            cin>>ar[i];
            sum+=ar[i];
    }

     vector<pair<int,int>>p(q);

    for(int i=0;i<q;i++) {
        cin>>p[i].first>>p[i].second;
    }

    long long e=0,o=0;

    for(int i=0;i<n;i++) {

        if(ar[i]%2==0) {
            e++;
        }
        else {
            o++;
        }
    }

    for(int i=0;i<q;i++) {

        if(p[i].first==0) {

            if(p[i].second%2==0) {
                    sum+= p[i].second * e;
                 }
        else {
            sum+=(p[i].second*e);
            o=n;
            e=0;
        }
            }

        else  {

                if(p[i].second%2!=0) {
               sum+=(p[i].second*o);
                e=n;
                 o=0;
            }

            else {
                sum+=(p[i].second*o);
            }

        }
       cout<<sum<<endl;
    }


}

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
        solve();


}














