#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;
const int mx=2e5+123;

int main()
{
    optimize();
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());
    int sz = unique(v.begin(),v.end()) - v.begin();

    cout<<sz<<endl;

}




