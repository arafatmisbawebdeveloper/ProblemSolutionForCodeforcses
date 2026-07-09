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
    int a[4],b[4],c[4];
    vector<int>v;
    for(int i=0;i<3;i++) {
        cin>>a[i];
    }
    sort(a,a+3);
    v.push_back(a[1]);

    for(int i=0;i<3;i++) {
        cin>>b[i];
    }
    sort(b,b+3);
    v.push_back(b[1]);

    for(int i=0;i<3;i++) {
        cin>>c[i];
    }
    sort(c,c+3);
    v.push_back(c[1]);

    sort(v.begin(),v.end());
    cout<<v[1]<<endl;



}





