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
    int a[4],b[4];
    for(int i=0;i<3;i++) {
        cin>>a[i];
    }

    for(int i=0;i<3;i++) {
        cin>>b[i];
    }


    vector<pair<int,int>>p(3);
    for(int i=0;i<3;i++) {
        p[i].first=a[i];
        p[i].second=b[i];
    }
    sort(p.begin(),p.end());

    /*for(int i=0;i<3;i++) {
        cout<<p[i].first<<" "<<p[i].second;
        cout<<endl;
    }*/

    int ans = p[0].first/p[0].second;
    cout<<ans<<endl;
}





